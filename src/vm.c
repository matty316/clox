#include "common.h"
#include "vm.h"
#include <stdio.h>

struct VM vm;

void initVM(void) {

}

void freeVM() {

}

static InterpretResult run(void) {
    #define READ_BYTE() (*vm.ip++)
    #define READ_CONSTANT() (vm.chunk->constants.value[READ_BYTE()])
    
    for (;;) {
        uint8_t instruction;
        switch (instruction = READ_BYTE()) {
            case OP_CONSTANT:
                Value constant = READ_CONSTANT();
                printValue(constant);
                printf("\n");
                break;
            case OP_RETURN: {
                return INTERPRET_OK;
            }
        }
    }

    #undef READ_CONSTANT
    #undef READ_BYTE
}

enum InterpretResult interpret(struct Chunk *chunk) {
    vm.chunk = chunk;
    vm.ip = vm.chunk.code;
    return run();
}


