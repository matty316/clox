#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"
#include "value.h"

enum OpCode {
    OP_CONSTANT,
    OP_RETURN,
};

struct Chunk {
    int count;
    int capacity;
    uint8_t *code;
    struct ValueArray constants;
    int *lines;
};

void initChunk(struct Chunk *chunk);
void freeChunk(struct Chunk *chunk);
void writeChunk(struct Chunk *chunk, uint8_t byte, int line);
int addConstant(struct Chunk *chunk, Value value);

#endif
