`include "cache_data_structs.sv"

module cache_FSM #(
)(
    input logic clk,
    input logic rst,
    input request_type cpu_req,
    output response_type cpu_resp,

    input response_type mem_resp,
    output request_type mem_req,
);

    cache_block_type cache_mem [0:SETS-1];

    typedef enum {IDLE, COMPARE_TAG, ALLOCATE, WRITE_BACK} cache_state;
    cache_state current_state, next_state;

    response_type next_cpu_resp;
    request_type next_mem_req;
    cache_block_type cache_line;

    logic [7:0] set;

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
                if( cache_line.valid && (current_line.tag == cpu_req.addr[TAG_MSB:TAG_LSB])) begin
                    // cache HIT
                    next_cpu_resp.ready = 1;
                    case(cpu_req.op)
                        2'b00: next_cpu_resp.data = (cpu_req.addr[2]) ? cache_line.data[63:32] : cache_line.data[31:0];
                        2'b01: begin
                            cache_line.dirty = 1;
                            cache_line.data = (cpu_req.addr[2]) ? {cpu_req.data, cache_line.data[31:0]} : {cache_line.data[63:32], cpu_req.data};
                            cache_mem[set] = cache_line;
                        end
                    endcase
                    next_state = IDLE;
                end

                else begin
                    // cache miss
                    next_mem_req = '{addr: cpu_req.addr, data: '0, op: 2'b10, valid: 1};
                    next_state = (!cache_line.valid || !cache_line.dirty) ? ALLOCATE : WRITE_BACK;
                end
             end

             ALLOCATE: begin
                if(mem_resp.ready) begin
                    cache_line.data = mem_resp.data;
                    cache_line.valid = 1;
                    cache_line.dirty = 0;
                    cache_line.tag = cpu_req.addr[TAG_MSB:TAG_LSB];
                    cache_mem[set] = cache_line;
                    next_state = COMPARE_TAG;
                end
             end

             WRITE_BACK: begin
                if(mem_resp.ready) begin
                    next_mem_req = '{addr: cpu_req.addr, data: '0, op: 2'b10, valid = 1};
                    next_state = ALLOCATE;
                end else begin
                    // write dirty block to memory
                    next_mem_req = '{addr: {cache_line.tag, cpu_req.addr[TAG_LSB-1:0]}, data: cache_line.data, op: 2'b01, valid = 1};
                end
             end
        endcase
    end

    always_ff @(posedge clk)
        if (rst)    current_state <= IDLE;
        else        current_state <= next_state;

endmodule
