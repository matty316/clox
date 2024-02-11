#ifndef clox_debug_h
#define clox_debug_h

#include "chunk.h"
#include "value.h"

void disassembleChunk(struct Chunk *chunk, const char *name);
int disassembleInstruction(struct Chunk *chunk, int offset);
void printValue(Value value);

#endif
