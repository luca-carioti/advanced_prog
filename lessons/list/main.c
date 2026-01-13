#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

int main(void) {
	p_node_t head = (p_node_t) malloc(sizeof(node_t));
	p_node_t tail = (p_node_t) malloc(sizeof(node_t));
	init(&head, &tail);
	print_list(head);
	
	add_first(&head, &tail, 5);
	add_first(&head, &tail, 3);
	print_list(head);
	add_last(&head, &tail, 9);
	print_list(head);
	return 0;
}
