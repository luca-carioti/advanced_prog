#ifndef QUEUE
#define QUEUE
typedef int generic_t;
typedef struct queue{
 int front;
 int rear;
 int size;
 int capacity;
 generic_t buffer[];
} queue_t,*p_queue_t;

//ADT functions
void init_queue(p_queue_t*, int);
void reset_queue(p_queue_t);
int enqueue(p_queue_t, generic_t);
int dequeue(p_queue_t);
generic_t front(p_queue_t);
generic_t rear(p_queue_t);
int is_empty(p_queue_t);
int is_full(p_queue_t);
int size(p_queue_t);
void print_queue(p_queue_t);

#endif
