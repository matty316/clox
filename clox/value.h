//
//  value.h
//  clox
//
//  Created by matty on 10/30/23.
//

#ifndef value_h
#define value_h

#include "common.h"

typedef double Value;

typedef struct {
    int capacity;
    int count;
    Value* values;
} ValueArray;

void initValueArray(ValueArray* array);
void writeValueArray(ValueArray* array, Value value);
void freeValueArray(ValueArray* array);
void printValue(Value value);

#endif /* value_h */
