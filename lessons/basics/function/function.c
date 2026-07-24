#include <stdio.h>
#include <stdlib.h>

int main(void) {

    //Argument are passed to function by values, unless we use pointer, in this case are passed by reference
    int n = 9;

    void inc_v(int number) {
        number ++;
    }

    inc_v(n);

    printf("Number has been incremented by a function accpting it by value.\nThe value of n is: %d \n", n);

    void inc_r(int *number) {
        (*number)++;
    }

    inc_r(&n);

    printf("N incremented by reference: %d \n", n);

    return EXIT_SUCCESS;
}