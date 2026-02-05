#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

#define EMPTY -1

//Utility method for rear and front management
int incr(int fr, int capacity) {
 return (fr+1) % (capacity - 1);
}

void init_queue(p_queue_t *p, int capacity) {
 *p = malloc(sizeof(queue_t) + (capacity * sizeof(generic_t)));
 (*p)->front = EMPTY;
 (*p)->rear = EMPTY;
 (*p)->size = 0;
 (*p)->capacity=capacity;
 printf("Queue successfully created \n");
}

void reset_queue(p_queue_t p) {
 p->front = EMPTY;
 p->rear = EMPTY;
 p->size EMPTY;
}

int size(p_queue_t p) {return p->size;}
int is_full(p_queue_t p) {return p->rear == p->capacity-1;} //It could be possible to use size
int is_empty(p_queue_t p) {return p->front == EMPTY;} //It could be possible to use size or rear
generic_t front(p_queue_t p) {if(!is_empty(p)){return p->front;}else{printf("Queue is empty \n"); return EMPTY;}}
generic_t rear(p_queue_t p) {if(!is_empty(p)){return p->rear;}else {printf("Queue is empty \n"); return EMPTY;}}

void print_queue(p_queue_t p) {
printf("{ \n");
printf("front: %d \n", p->front);
printf("rear: %d \n", p->rear);
printf("size: %d \n", p->size);
printf("capacity: %d \n", p->capacity);
printf("} \n");
}

//We use module increment in order to be able to continue add element
int enqueue(p_queue_t p, generic_t info) {
 //Early return
 if(is_full(p))return 0;
 //Check if it is empty
 if(is_empty(p)) {p->front = incr(p->front, p->capacity);}
 p->rear = incr(p->rear, p->capacity);
 p->size = incr(p->size, p->capacity);
 p->buffer[p->rear] = info;
 return 1;
}


int dequeue(p_queue_t p) {
if(is_empty(p)) return 0;
p->front=incr(p->front, p->capacity);
if(p->front == p->rear % (p->capacity-1)) {
 p->front=EMPTY;
 p->rear=EMPTY;
}
return 1;
}




