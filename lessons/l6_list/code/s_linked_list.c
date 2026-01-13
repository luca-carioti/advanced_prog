#include <stdio.h>
#include "s_linked_list.h"
#include <stdlib.h>


//Init function init the head of the list to NULL
void init(p_node_t *head) {
	//Avoid init for non null head, because it won't free the rest of the list
	if(*head !=NULL) return;
	*head = NULL;
}

/*
 * Add function takes the head of the list and the value to add
 * First, memory will be allocated for the new element
 * Second,if the head is null, it will be pointed to the first element
 * For the new element, the info will be set with the provided value, and the next pointer will be set to NULL
*/
void add(p_node_t *head, generic_t info){
	//Allocate the memory
	p_node_t temp = (p_node_t) malloc(sizeof(node_t));
	//Set the info and the next
	temp->info = info;
	temp->next = *head;
	*head = temp;
}

/*
*Remove function takes the pointer to the head and the value of the info
*/
int remove_sl_list(p_node_t *head, generic_t info){
	//r is the element to remove, c is the current element
	p_node_t r,c;
	r=c=*head;
	if(*head == NULL) return 0;
	if(r->info==info){
		*head = r->next;
		free(r);
		return 1;
	}
	
	//Loop over the list until we find the element
	while(c!=NULL){
		c = r->next;
		if(c->info == info) {
			r->next = c->next;
			free(c);
			return 1;
		}
		r = c;

	}

	return 0;

}

