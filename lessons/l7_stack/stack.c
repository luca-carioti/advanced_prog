#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

#define int EMPTY -1;
#define int CAPACITY 100;

//Initialize the stack
//Allocate the memory
//Set the top to EMPTY
void init_stack(p_stack pointer) {
   pointer = (p_stack) malloc(sizeof(p_stack));
   pointer->top = EMPTY;
}


