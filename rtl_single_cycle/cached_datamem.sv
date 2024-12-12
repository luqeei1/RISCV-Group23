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
logic [7:0] byte3, byte2, byte1, byte0;

always_comb begin
    byte3 = out_cache[31:24];
    byte2 = out_cache[23:16];
    byte1 = out_cache[15:8];
    byte0 = out_cache[7:0];

    // Read logic
    case (modeAddr)
        3'b001: begin  // load entire word
            data_out = out_cache; 
        end
        // 3'b010: data_out = ... load half word

        3'b011: begin // load signed byte
            case (addr[1:0])
                2'b00: data_out = {{24{byte0[7]}}, byte0};
                2'b01: data_out = {{24{byte1[7]}}, byte1};
                2'b10: data_out = {{24{byte2[7]}}, byte2};
                2'b11: data_out = {{24{byte3[7]}}, byte3};
            endcase
        end
        3'b101: begin // load unsigned byte
            case (addr[1:0])
                2'b00: data_out = {{24'b0}, byte0};
                2'b01: data_out = {{24'b0}, byte1};
                2'b10: data_out = {{24'b0}, byte2};
                2'b11: data_out = {{24'b0}, byte3};
            endcase
        end
        default: data_out = out_cache; //invalid access
    endcase
end

write_through_cache write_through_cache (
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
