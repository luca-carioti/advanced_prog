#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

int main(void) {
p_queue_t p = NULL;
init_queue(&p, 10);
int empty = is_empty(p);
int full = is_full(p);
if(empty) {printf("The queue is empty \n");} else {printf("The queue is not empty \n");}
if(full) {printf("The queue is full \n");} else {printf("The queue is not full yet \n");}

//Add an element and verify something
int en_result = enqueue(p, 3);
if(!en_result) printf("Element has not been added to queue \n");
else print_queue(p);
int de_result = dequeue(p);
if(!de_result) printf("Queue has not been dequeued \n");
else print_queue(p);
return EXIT_SUCCESS;
}
