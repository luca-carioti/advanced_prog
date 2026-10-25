#include <stdio.h> 
#include <stdlib.h> 
 
int main(void) { 
    int *numbers = malloc(3 * sizeof(int)); 
 
    if (numbers == NULL) { 
        fprintf(stderr, "Allocazione fallita\n"); 
        return 1; 
    } 
 
    numbers[0] = 10; 
    numbers[1] = 20; 
    numbers[2] = 30; 
 
    for (int i = 0; i < 3; i++) { 
        printf("numbers[%d] = %d\n", i, numbers[i]); 
    } 
 
    free(numbers); 
    numbers = NULL; 
 
    return 0; 
} 