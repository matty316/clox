//
//  compiler.c
//  clox
//
//  Created by matty on 11/2/23.
//

#include "compiler.h"
#include "common.h"
#include "scanner.h"

#include <stdio.h>

bool compile(const char* source, Chunk* chunk) {
    initScanner(source);
    advance();
    expression();
    consume(TOKEN_EOF, "Expect end of expression");
}
