#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    typedef struct {
        char *name;
        int age;
    } person;

    //Allocate person
    //(person*) before malloc is the typecasting because we are telling the compiler to convert void* into person*
    //sizeof is not an actual function, because the compiler intreprets it and translates it ti the actual memory size of the struct
    person *luca = (person*) malloc(sizeof(person));

    //Access person's members
    luca->name = "Luca";
    luca->age=27;

    //To free the memory you can use free
    free(luca);
}