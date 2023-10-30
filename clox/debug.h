//
//  debug.h
//  clox
//
//  Created by matty on 10/30/23.
//

#ifndef debug_h
#define debug_h

#include "chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#endif /* debug_h */
