//
//  chunk.h
//  clox
//
//  Created by matty on 10/30/23.
//

#ifndef chunk_h
#define chunk_h

#include "common.h"
#include "value.h"

typedef enum {
    OP_CONSTANT,
    OP_CONSTANT_LONG,
    OP_RETURN,
} OpCode;


typedef struct {
    int offset;
    int line;
} LineStart;

typedef struct {
    int count;
    int capacity;
    ValueArray constants;
    uint8_t* code;
    int lineCount;
    int lineCapacity;
    LineStart *lines;
} Chunk;


void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte, int line);
int addConstant(Chunk* chunk, Value value);
int getLine(Chunk* chunk, int instruction);
void writeConstant(Chunk* chunk, Value value, int line);

#endif /* chunk_h */
