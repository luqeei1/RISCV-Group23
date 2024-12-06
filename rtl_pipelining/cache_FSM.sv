`include "cache_data_structs.sv"

module cache_FSM(
    input logic clk,
    input logic rst,
    input request_type cpu_req,
    output response_type cpu_resp,

    input response_type mem_resp,
    output request_type mem_req
);

    cache_block_type cache_mem [0:SETS-1];

    typedef enum {IDLE, COMPARE_TAG, ALLOCATE, WRITE_BACK} cache_state;
    cache_state current_state, next_state;

    response_type next_cpu_resp;
    request_type next_mem_req;
    cache_block_type cache_line;

    logic [7:0] set;
    logic [31:0] current_addr;

    assign set = cpu_req.addr[10:3];
    assign cpu_resp = next_cpu_resp;
    assign mem_req = next_mem_req;

    always_comb begin
        next_state = current_state;
        next_cpu_resp = '{data: '0, ready: 0};
        next_mem_req = '{addr: '0, data: '0, op: '0, valid:0};
        cache_line = cache_mem[set];

        case (current_state)

             IDLE: begin
                if (cpu_req.valid) begin
                    next_state = COMPARE_TAG;
                end
             end

             COMPARE_TAG: begin
                if( cache_line.valid && (cache_line.tag == cpu_req.addr[TAG_MSB:TAG_LSB])) begin
                    // cache HIT
                    next_cpu_resp.ready = 1;

                    // READ LOGIC
                    if(cpu_req.op == 2'b00) begin
                        next_cpu_resp.data = (cpu_req.addr[2]) ?
                            {cache_line.data[7], cache_line.data[6], cache_line.data[5], cache_line.data[4]} :
                            {cache_line.data[3], cache_line.data[2], cache_line.data[1], cache_line.data[0]};
                    end
                    
                    // WRITE LOGIC
                    else if (cpu_req.op == 2'b01) begin
                        cache_line.dirty = 1;
                        case(cpu_req.mode_addr)

                            3'b011, 3'b101: begin // single byte addressing
                                cache_line.data[cpu_req.addr[2:0]] = cpu_req.data[7:0];
                            end
                            default:  // full word
                                if(cpu_req.addr[2]) begin
                                    cache_line.data[7] = cpu_req.data[31:24];
                                    cache_line.data[6] = cpu_req.data[23:16];
                                    cache_line.data[5] = cpu_req.data[15:8];
                                    cache_line.data[4] = cpu_req.data[7:0];
                                end else begin
                                    cache_line.data[3] = cpu_req.data[31:24];
                                    cache_line.data[2] = cpu_req.data[23:16];
                                    cache_line.data[1] = cpu_req.data[15:8];
                                    cache_line.data[0] = cpu_req.data[7:0];
                                end
                        endcase
                        cache_mem[set] = cache_line;
                    end
                    
                    next_state = IDLE;
                end

                else begin
                    // cache miss
                    current_addr = {cpu_req.addr[31:3], 3'b000};
                    next_mem_req = '{addr: cpu_req.addr, data: '0, op: 2'b10, valid: 1};
                    // if cache_line is clean or bit is invalid then go straight to allocate
                    next_state = (!cache_line.valid || !cache_line.dirty) ? ALLOCATE : WRITE_BACK;
                end
             end

             ALLOCATE: begin
                if(mem_resp.ready) begin
                    cache_line.data[3] = mem_resp.data[31:24];
                    cache_line.data[2] = mem_resp.data[23:16];
                    cache_line.data[1] = mem_resp.data[15:8];
                    cache_line.data[0] = mem_resp.data[7:0];

                    current_addr = current_addr + 4;
                    next_mem_req = '{addr: current_addr, data: 0, op: 2'b10, valid:1}; //fetching second word

                    cache_line.data[7] = mem_resp.data[31:24];
                    cache_line.data[6] = mem_resp.data[23:16];
                    cache_line.data[5] = mem_resp.data[15:8];
                    cache_line.data[4] = mem_resp.data[7:0];

                    cache_line.valid = 1;
                    cache_line.dirty = 0;
                    cache_line.tag = cpu_req.addr[TAG_MSB:TAG_LSB];
                    cache_mem[set] = cache_line;
                    next_state = COMPARE_TAG;
                end       
             end

             WRITE_BACK: begin
                if(mem_resp.ready) begin
                    next_mem_req = '{addr: {cache_line.tag, set, 3'b0},
                                    data: {cache_line.data[7], cache_line.data[6], cache_line.data[5], cache_line.data[4],
                                           cache_line.data[3], cache_line.data[2], cache_line.data[1], cache_line.data[0]},
                                    op: 2'b01, valid: 1};
                    next_state = ALLOCATE;
                end
             end
        endcase
    end

    always_ff @(posedge clk)
        if (rst)    current_state <= IDLE;
        else        current_state <= next_state;

endmodule
