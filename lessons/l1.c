#include <stdio.h>
#include <stdlib.h>

struct house{ char *name; int people;} house, *phouse;
typedef struct {int meter;} garage, *pgarage;

int main(void) {
	
	int *v, i;
	v = (int*) malloc(sizeof(int) * 10);

	for(i = 0; i<10; i++) 
		*(v + i) = i;

	for(i = 0; i<10; i++)
		printf("v[%d] = %d\n", i, *(v+i));
	
	//Test struct
	unsigned int nhouse = 0;
	printf("Enter the number of the house: ");
	scanf("%d", &nhouse);
	puts("");

	//Create the house
	//First allocate the memory
	struct house *building = (struct house*) malloc(sizeof(struct house) * nhouse);
	for(i=0; i<nhouse; i++) {
		//Allocate the space for the name of the house
		building[i].name = (char*) malloc(200);
		printf("Enter the name of the house: %d: ", i);
		scanf("%s", building[i].name);
	}

	//Print the house of the building
	for(i=0; i<nhouse; i++) {
		printf("House %d {name: %s, people: %d}\n", i,building[i].name, building[i].people);
	}

	//Traing with typdef
	//USe the same number of house for semplicity
	unsigned int ngarage;
	printf("Enter the number of the garage: ");
	scanf("%d", &ngarage);
	//We don't need to allocate memory
	garage *garages = (garage*) malloc(sizeof (garage) * ngarage);
	for(i=0; i<ngarage; i++) {
		printf("Enter the meter of the garage %d", i);
		scanf("%d", &garages[i].meter);
	}


	for(i=0;i<ngarage;i++) {
		printf("Garage %d {meter: %d} \n", i, garages[i].meter);
	}




















}
