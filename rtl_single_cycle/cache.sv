`include "cache_data_structs.sv"

module cache #(
    parameter WIDTH = 32
)(
    input logic clk,
    input logic rst,

    input logic [2:0] modeAddr,
    input logic [WIDTH-1:0] addr,
    input logic [WIDTH-1:0] write_data,
    input logic WE,
    input logic RE, //read enable
    output logic miss_stall,
    output logic [WIDTH-1:0] cache_out

);

    logic [7:0] ram_array [2**17 -1:0];
    cache_block_type cache_mem [0:SETS-1];

    typedef enum {COMPARE_TAG, ALLOCATE, WRITE_BACK} cache_state;
    cache_state current_state, next_state;

    cache_block_type cache_line;

    logic [7:0] set;
    logic block;

    assign set = addr[10:3];
 
    initial begin
        $readmemh("../rtl_single_cycle/data_memory.hex", ram_array, 17'h00000, 17'h1FFFF);
    end    

    always_comb begin
        next_state = current_state;
        miss_stall = 0;
        cache_out = 0;

        case (current_state)
            COMPARE_TAG: begin
                if (cache_line.valid && (cache_line.tag == addr[TAG_MSB:TAG_LSB])) begin
                    if (RE) begin
                        cache_out = (addr[2]) ?
                            {cache_line.data[63:32]} :
                            {cache_line.data[31:0]};
                    end
                    next_state = COMPARE_TAG;
                end else begin
                    miss_stall = 1;
                    next_state = (!cache_line.dirty) ? ALLOCATE : WRITE_BACK;
                end
            end

            ALLOCATE: begin
                miss_stall = 1;
                next_state = COMPARE_TAG;
            end

            WRITE_BACK: begin
                miss_stall = 1;
                next_state = ALLOCATE;
            end
        endcase
    end

always_ff @(posedge clk) begin
    if (rst) begin
        current_state <= COMPARE_TAG;
        miss_stall <= 0;
        cache_out <= 0;
    end else begin
        cache_line <= cache_mem[set];
        current_state <= next_state;

        case (current_state)
            COMPARE_TAG: begin
                if (WE && cache_line.valid && (cache_line.tag == addr[TAG_MSB:TAG_LSB])) begin
                    cache_line.dirty <= 1;
                    block <= 1;
                    case (modeAddr)
                        3'b011, 3'b101: begin
                            cache_line.data[(addr[2:0] * 8) +: 8] <= write_data[7:0];
                        end
                        default: begin
                            if (addr[2]) begin
                                block <= 1;
                                cache_line.data[63:32] <= write_data;
                            end else begin
                                block <= 1;
                                cache_line.data[31:0] <= write_data;
                            end
                        end
                    endcase
                    cache_mem[set] <= cache_line;
                end
            end

            ALLOCATE: begin
                cache_line.data[31:0] <= {ram_array[addr[16:0] + 3],
                                          ram_array[addr[16:0] + 2],
                                          ram_array[addr[16:0] + 1],
                                          ram_array[addr[16:0] + 0]};
                cache_line.data[63:32] <= {ram_array[addr[16:0] + 7],
                                           ram_array[addr[16:0] + 6],
                                           ram_array[addr[16:0] + 5],
                                           ram_array[addr[16:0] + 4]};
                cache_line.valid <= 1;
                cache_line.dirty <= 0;
                cache_line.tag <= addr[TAG_MSB:TAG_LSB];
                cache_mem[set] <= cache_line;
            end

            WRITE_BACK: begin
                ram_array[{cache_line.tag, set, 3'b000}] <= cache_line.data[63:56];
                ram_array[{cache_line.tag, set, 3'b001}] <= cache_line.data[55:48];
                ram_array[{cache_line.tag, set, 3'b010}] <= cache_line.data[47:40];
                ram_array[{cache_line.tag, set, 3'b011}] <= cache_line.data[39:32];
                ram_array[{cache_line.tag, set, 3'b100}] <= cache_line.data[31:24];
                ram_array[{cache_line.tag, set, 3'b101}] <= cache_line.data[23:16];
                ram_array[{cache_line.tag, set, 3'b110}] <= cache_line.data[15:8];
                ram_array[{cache_line.tag, set, 3'b111}] <= cache_line.data[7:0];
            end
        endcase
    end
end

endmodule
