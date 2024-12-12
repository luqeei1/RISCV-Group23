module cached_datamem #(
    parameter   ADDR_WIDTH = 32,
                DATA_WIDTH = 32
)(
    input logic clk,
    input logic rst,
    input logic WE, //write enable
    input logic RE, //read enable
    input logic [2:0] modeAddr,
    input logic [ADDR_WIDTH-1:0] addr,
    input logic [DATA_WIDTH-1:0] write_data,

    output logic miss_stall,
    output logic [DATA_WIDTH-1:0] data_out
);

logic [DATA_WIDTH-1:0] out_cache;

always_comb begin
    // Read logic
    case (modeAddr)
        3'b001: begin  // load entire word
            data_out = out_cache; 
        end
        // 3'b010: data_out = ... load half word

        3'b011: begin // load signed byte
            case (addr[1:0])
                2'b00: data_out = {{24{out_cache[7:0][7]}}, out_cache[7:0]};
                2'b01: data_out = {{24{out_cache[15:8][7]}}, out_cache[15:8]};
                2'b10: data_out = {{24{out_cache[23:16][7]}}, out_cache[23:16]};
                2'b11: data_out = {{24{out_cache[31:24][7]}}, out_cache[31:24]};
            endcase
        end
        3'b101: begin // load unsigned byte
            case (addr[1:0])
                2'b00: data_out = {{24'b0}, out_cache[7:0]};
                2'b01: data_out = {{24'b0}, out_cache[15:8]};
                2'b10: data_out = {{24'b0}, out_cache[23:16]};
                2'b11: data_out = {{24'b0}, out_cache[31:24]};
            endcase
        end
        default: data_out = out_cache; //invalid access
    endcase
end

cache cache (
    .clk(clk),
    .rst(rst),
    .WE(WE),
    .RE(RE),
    .modeAddr(modeAddr),
    .addr(addr),
    .write_data(write_data),

    .miss_stall(miss_stall),
    .cache_out(out_cache)
);

endmodule
