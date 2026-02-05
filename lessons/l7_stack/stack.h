#ifndef STACK
#define STACK
typedef int generic_t;
typedef struct stack{
	int top;
	generic_t buffer[];
} stack_t, *p_stack;

void init_stack(p_stack*);
void empty_stack(p_stack);
int is_empty(p_stack); //there is no need to modify the stack
int is_full(p_stack); //there is no need to modify the stack
int push(p_stack, generic_t);
generic_t pop(p_stack);
int top(p_stack);


#endif
