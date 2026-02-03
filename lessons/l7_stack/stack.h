#ifndef STACK
#define STACK
typedef int generic_t;
typedef struct stack{
	int top;
	generic_t buffer[];
} stack_t, *p_stack;

void init_stack(p_stack);
int is_empty(stack_t); //there is no need to modify the stack
int is_full(stack_t); //there is no need to modify the stack
int push(p_stack, generic_t);
int pop(p_stack);


#endif
