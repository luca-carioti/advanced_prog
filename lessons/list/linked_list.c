#include <stdio.h>
#include "linked_list.h"
#include <stdlib.h>


//Init function init the head of the list to NULL
void init(p_node_t *head, p_node_t *tail) {
	//Avoid init for non null head, because it won't free the rest of the list
	if(*head !=NULL || *tail != NULL) return;
	*head = NULL;
	*tail = NULL;
}

/*
 * This function add a new element in first position, so as the head of the list
 * We have different scenario:
 * 1) The list is empty:
	- A new element is allocated
	- It is assigned to the head, so to the tail
   2) The list is not empty:
	- Only the head is modified because we don't touch the tail
 * The list is empty if both the pointer are null
 * We could leave the malloc of the first element as first action
*/
void add_first(p_node_t *head, p_node_t *tail,  generic_t info){
	//Allocate the memory
	p_node_t temp = (p_node_t) malloc(sizeof(node_t));
	//Set the info and the next
	temp->info = info;
	temp->next = *head;
	//Set the prev pointer to the head
	//Incapsulate the *head because -> has higher precedence on *
	(*head)->prev = temp;
	*head = temp;
	if(*tail == NULL) *tail = temp;
}

void add_last(p_node_t *head, p_node_t *tail, generic_t info){ 
	//Allocate the memory for the new elemet
	p_node_t temp = (p_node_t) malloc(sizeof(node_t));
	//Fill the new element
	temp->info = info;
	temp->prev = *tail;
	*tail = temp;
	if(*head == NULL) *head = temp;
}

/*
*Remove function takes the pointer to the head and the value of the info
*/
int find_and_remove(p_node_t *head, generic_t info){
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

void print_list(p_node_t head) {
	int n;
	p_node_t temp = head;
	printf("[ ");
	while(temp->next != NULL){
		printf("%d", temp->info);
		printf(", ");
		if(n == 5) printf("\n");
		n++;
		temp = temp->next;
	}
	printf(" ]\n");

}







