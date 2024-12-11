`ifndef DATA_STRUCTS
`define DATA_STRUCTS

parameter TAG_MSB = 31;
parameter TAG_LSB = 11;
parameter SETS = 256;

/*  BLOCK SIZE  =   8 bytes
    SETS        =   2^8 = 256
    WAYS        =   2

    Cache capacity = 4096 bytes   */ 

typedef struct packed {
    logic valid;    // valid bit
    logic dirty;    // dirty bit
    logic [TAG_MSB:TAG_LSB] tag;
    logic [63:0] data;
} cache_block_type;

typedef struct packed {
    logic [31:0] addr;
    logic [31:0] data;
    logic [1:0] op;     // 00 = read, 01 = write, 10 = allocate
    logic [2:0] mode_addr;  
    logic valid;
} request_type;

typedef struct packed{
    logic [31:0] data;
    logic ready;
} response_type;

`endif 
