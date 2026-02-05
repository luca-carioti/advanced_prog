#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

#define EMPTY -1 //without ; and type
#define CAPACITY 100

//Initialize the stack
//Allocate the memory
//Set the top to EMPTY
void init_stack(p_stack *pointer) {
   *pointer = (p_stack) malloc(sizeof(stack_t) + (CAPACITY * sizeof(generic_t)));
   (*pointer)->top = EMPTY;
   printf("Stack initialized successfully \n");
}

int is_empty(p_stack stack) {
	return stack-> top == EMPTY;
}

int is_full(p_stack stack) {
	return stack-> top == CAPACITY-1;
}

int push(p_stack s, generic_t info) {
	//Check if the stack is full
	if(is_full(s)) {printf("Stack is full, the element can't be inserted \n"); return 0;}
	s->top++;
	s->buffer[s->top] = info;
	printf("Element sucessfully added to stack. \n {top: %d} \n", s->top);
	return 1;
}

generic_t  pop(p_stack s) {
if(s->top == EMPTY) {printf("Unable to pop info, stack is empty. \n"); return 0;}
generic_t ret = s->buffer[s->top];
s->top--;
printf("Element successfully popped, \n {top: %d} \n", s->top);
return ret;
}

int top(p_stack s) {
return s->top;
}

void empty_stack(p_stack s){
	s->top = EMPTY;
}






