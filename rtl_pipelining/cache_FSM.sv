`include "cache_data_structs.sv"

module cache_FSM(
    input logic clk,
    input logic rst,

    input logic [2:0] modeAddr,
    input logic [WIDTH-1:0] addr,
    input logic [WIDTH-1:0] write_data,
    input logic trigger,
    input logic WE,
    input logic RE, //read enable
    output logic miss_stall,
    output logic data_out

);

    logic [7:0] ram_array [2**17 -1:0];
    cache_block_type cache_mem [0:SETS-1];

    typedef enum {IDLE, COMPARE_TAG, ALLOCATE, WRITE_BACK} cache_state;
    cache_state current_state, next_state;

    cache_block_type cache_line;

    logic [7:0] set;
    logic hit;
    logic [WIDTH-1:0] mem_data;

    assign set = addr[10:3];
 
    initial begin
        $readmemh("../rtl_pipelining/datamem.hex", ram_array, 17'h00000, 17'h1FFFF);
    end    

    always_ff @(posedge clk or posedge rst) begin
        if (rst) current_state <= IDLE;
        else     current_state <= next_state;
    end

    always_comb begin
        next_state = current_state;
        cache_line = cache_mem[set];

        case (current_state)
            IDLE: begin
                miss_stall = 0;
                data_out = 0;
                next_state = COMPARE_TAG;
            end

            COMPARE_TAG: begin
                //CACHE HIT
                if (cache_line.valid && (cache_line.tag == addr[TAG_MSB:TAG_LSB])) begin

                    // READ LOGIC
                    if(RE) begin
                        data_out = (addr[2]) ?
                            {cache_line.data[63:56], cache_line.data[55:48], cache_line.data[47:40], cache_line.data[39:32]} :
                            {cache_line.data[31:24], cache_line.data[23:16], cache_line.data[15:8], cache_line.data[7:0]};
                    end
                    // WRITE LOGIC
                    else if (WE) begin
                        cache_line.dirty = 1;
                        case(modeAddr)

                            3'b011, 3'b101: begin // single byte addressing
                                cache_line.data[(addr[2:0]*8) +: 8] = write_data[7:0];
                            end
                            default:  // full word
                                if(addr[2]) begin
                                    cache_line.data[63:32] = write_data;
                                end else begin
                                    cache_line.data[31:0] = write_data;
                                end
                        endcase
                        cache_mem[set] = cache_line;
                    end
                    next_state = IDLE;
                end

                else begin
                    // CACHE MISS
                    miss_stall = 1;
                    // if cache_line is clean or bit is invalid then go straight to allocate
                    next_state = (!cache_line.dirty) ? ALLOCATE : WRITE_BACK;
                end
            end

            ALLOCATE: begin
                miss_stall = 1;
                cache_line.data[31:0] = { ram_array[{A[16:0]} + 3],
                                          ram_array[{A[16:0]} + 2],
                                          ram_array[{A[16:0]} + 1],
                                          ram_array[{A[16:0]} + 0]};

                cache_line.data[63:32] = {ram_array[{A[16:0]} + 7],
                                          ram_array[{A[16:0]} + 6],
                                          ram_array[{A[16:0]} + 5],
                                          ram_array[{A[16:0]} + 4]};                        

                cache_line.valid = 1;
                cache_line.dirty = 0;
                cache_line.tag = addr[TAG_MSB:TAG_LSB];
                cache_mem[set] = cache_line;
                next_state = COMPARE_TAG;
            end

            WRITE_BACK: begin
                miss_stall = 1;
                // write back dirty data to main memory
                ram_array[{cache_line.tag, set, 3'b000}] = cache_line.data[63:32];
                ram_array[{cache_line.tag, set, 3'b100}] = cache_line.data[31:0];
                next_state = ALLOCATE;
            end
        endcase   
    end     


endmodule
        