/* verilator lint_off UNOPTFLAT */
/* verilator lint_off UNUSED */
/* verilator lint_off CASEINCOMPLETE */
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
    cache_set_type cache_mem [0:SETS-1];

    logic [7:0] set;
    logic [WIDTH-1:0] read_data;

    logic hit0; // hit for way 0
    logic hit1; // hit for way 1
    logic replace_way;

    assign set = addr[10:3];

    initial begin
        $readmemh("../rtl_single_cycle/data_memory.hex", ram_array, 17'h00000, 17'h1FFFF);
    end    

    always_comb begin
        miss_stall = 0;
        cache_out = 0;

        hit0 = cache_mem[set].way[0].valid && (cache_mem[set].way[0].tag == addr[TAG_MSB:TAG_LSB]);
        hit1 = cache_mem[set].way[1].valid && (cache_mem[set].way[1].tag == addr[TAG_MSB:TAG_LSB]);

        if (hit0 || hit1) begin
            if(RE) begin
                if(hit0) begin
                    cache_out = (addr[2]) ? {cache_mem[set].way[0].data[63:32]} :{cache_mem[set].way[0].data[31:0]};
                    cache_mem[set].lru = 0;
                end else begin
                    cache_out = (addr[2]) ? {cache_mem[set].way[1].data[63:32]} :{cache_mem[set].way[1].data[31:0]};
                    cache_mem[set].lru = 1;
                end
            end

            if(WE) miss_stall = 0; // write-through no need to stall

        end else if (WE || RE) begin
            // CACHE MISS
            miss_stall = 1;
        end
    end

    always_ff @(posedge clk) begin
        if(miss_stall) begin
            // populate cache
            // replace way 1 (least recently used)
            if (cache_mem[set].lru) begin 
                cache_mem[set].way[1].data[31:0] <= {ram_array[addr[16:0] + 3],
                                            ram_array[addr[16:0] + 2],
                                            ram_array[addr[16:0] + 1],
                                            ram_array[addr[16:0] + 0]};

                cache_mem[set].way[1].data[63:32] <= {ram_array[addr[16:0] + 7],
                                            ram_array[addr[16:0] + 6],
                                            ram_array[addr[16:0] + 5],
                                            ram_array[addr[16:0] + 4]};
                
                cache_mem[set].way[1].tag <= addr[TAG_MSB:TAG_LSB];
                cache_mem[set].way[1].valid <= 1;
                cache_mem[set].lru <= 0;
            end

            // replace way 0
            else begin
                cache_mem[set].way[0].data[31:0] <= {ram_array[addr[16:0] + 3],
                                            ram_array[addr[16:0] + 2],
                                            ram_array[addr[16:0] + 1],
                                            ram_array[addr[16:0] + 0]};

                cache_mem[set].way[0].data[63:32] <= {ram_array[addr[16:0] + 7],
                                            ram_array[addr[16:0] + 6],
                                            ram_array[addr[16:0] + 5],
                                            ram_array[addr[16:0] + 4]};
                
                cache_mem[set].way[0].tag <= addr[TAG_MSB:TAG_LSB];
                cache_mem[set].way[0].valid <= 1;
                cache_mem[set].lru <= 1;
            end
        end

        else if(WE) begin
            // write to both mem and cache
            case (modeAddr)
                3'b011, 3'b101: begin
                    if(hit0) begin
                        cache_mem[set].way[0].data[(addr[2:0] * 8) +: 8] <= write_data[7:0];
                    end else if (hit1) begin
                        cache_mem[set].way[1].data[(addr[2:0] * 8) +: 8] <= write_data[7:0];
                    end
                end
                default: begin
                    if(addr[2]) begin
                        if(hit0) begin
                            cache_mem[set].way[0].data[63:32] <= write_data;
                        end else if (hit1) begin
                            cache_mem[set].way[1].data[63:32] <= write_data;
                        end
                    end else begin
                        if(hit0) begin
                            cache_mem[set].way[0].data[31:0] <= write_data;
                        end else if (hit1) begin
                            cache_mem[set].way[1].data[31:0] <= write_data;
                        end
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
