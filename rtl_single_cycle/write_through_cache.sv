`include "cache_data_structs.sv"

module write_through_cache #(
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

    logic [7:0] set;
    logic [WIDTH-1:0] read_data;
    logic block;

    assign set = addr[10:3];
    assign block = addr[2];

    initial begin
        $readmemh("../rtl_single_cycle/data_memory.hex", ram_array, 17'h00000, 17'h1FFFF);
    end    

    always_comb begin
        miss_stall = 0;
        cache_out = 0;

        if (cache_mem[set].valid && (cache_mem[set].tag == addr[TAG_MSB:TAG_LSB])) begin
            if(RE) begin
                cache_out = (addr[2]) ?
                            {cache_mem[set].data[63:32]} :
                            {cache_mem[set].data[31:0]};
            end

            if(WE) begin
                // write-through no need to stall
                miss_stall = 0;
            end
        end

        else begin
            // CACHE MISS
            miss_stall = 1;
        end
    end

    always_ff @(posedge clk) begin
        if(miss_stall) begin
            // populate cache
            cache_mem[set].data[31:0] <= {ram_array[addr[16:0] + 3],
                                          ram_array[addr[16:0] + 2],
                                          ram_array[addr[16:0] + 1],
                                          ram_array[addr[16:0] + 0]};

            cache_mem[set].data[63:32] <= {ram_array[addr[16:0] + 7],
                                           ram_array[addr[16:0] + 6],
                                           ram_array[addr[16:0] + 5],
                                           ram_array[addr[16:0] + 4]};
            
            cache_mem[set].tag <= addr[TAG_MSB:TAG_LSB];
            cache_mem[set].valid <= 1;
        end

        else if(WE) begin
            // write to both mem and cache
            case (modeAddr)
                3'b011, 3'b101: begin
                    cache_mem[set].data[(addr[2:0] * 8) +: 8] <= write_data[7:0];
                end
                default: begin
                    if(addr[2]) begin
                        cache_mem[set].data[63:32] <= write_data;
                    end else begin
                        cache_mem[set].data[31:0] <= write_data;
                    end
                end
            endcase

            // writing to memory
            ram_array[addr[16:0]] <= write_data[31:24];
            ram_array[addr[16:0] + 1] <= write_data[23:16];
            ram_array[addr[16:0] + 2] <= write_data[15:8];
            ram_array[addr[16:0] + 3] <= write_data[7:0];
        end
    end
endmodule
