#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

int main(void) {
p_stack stack_p = NULL;
//Init the stack
init_stack(&stack_p);
//Is empty check TRUE
int empty = is_empty(stack_p);
int full = is_full(stack_p);
if(empty){ printf("Stack is empty \n");}
else {printf("Stack is not empty \n");}
if(full){printf("Stack is full \n");} else {printf("Stack is not full yet  \n");}

//Add an element and verify the empty function
int push_result = push(stack_p, 6);
empty = is_empty(stack_p);

//Pop an element
int pop_result = pop(stack_p);
empty = is_empty(stack_p);
printf("Stack is empty: %d \n", empty);
return 0;
}
