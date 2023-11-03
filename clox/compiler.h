//
//  compiler.h
//  clox
//
//  Created by matty on 11/2/23.
//

#ifndef compiler_h
#define compiler_h

#include "vm.h"

bool compile(const char* source, Chunk* chunk);

#endif /* compiler_h */
