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

typedef struct{
    cache_block_type way[2];
    logic lru;      // if 0: way[0] least recently used 
} cache_set_type;

`endif 