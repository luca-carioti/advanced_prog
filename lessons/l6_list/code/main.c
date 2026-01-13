#include <stdio.h>
#include "s_linked_list.h"
#include <stdlib.h>

void print_list(p_node_t);

int main(void){
	int n_element;
	printf("Insert the size of the list: ");
	scanf("%d", &n_element);
	//declare and init the head
	p_node_t head = NULL;
	init(&head);
	
	for(int i=0; i<n_element; i++){
		int num;
		scanf("%d", &num);
		add(&head, num);
	}
	
	//Print the list
	print_list(head);

	//insert value to delete
	int d_value;
	printf("Insert the value you want to delete: ");
	scanf("%d", &d_value);
	//Call the remove function
	remove_sl_list(&head, d_value);
	print_list(head);
	return 0;
}

void print_list(p_node_t head) {
	p_node_t temp = head;
	int n = 0;
	printf("[");
	while(temp != NULL) {
		//Take the value of the void pointer and print it
		if(n==5) {n=0; printf("\n");}
		printf("%d",  temp->info);
		if(temp->next != NULL) printf(", ");
		temp = temp->next;
	}
	printf("] \n");


}


