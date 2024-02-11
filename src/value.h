#ifndef clox_value_h
#define clox_value_h

#include "common.h"

typedef double Value;

struct ValueArray {
    int capacity;
    int count;
    Value *values;
};

void initValueArray(struct ValueArray *array);
void writeValueArray(struct ValueArray *array, Value value);
void freeValueArray(struct ValueArray *array);

#endif
