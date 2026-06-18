#include <stdio.h>
#include <stdlib.h>

int main() {
    //REMEMBER: each hex char represent 4 bit
    int a = 0;
    //Assign to a_pt the address of a
    int *a_pt = &a;
    //Store the pointer as 32 bit
    int a_pt_trunc = (int)a_pt;

    printf("Value of a is: %d\n", a);
    //In this way we are trying to pass a 64 pointer to a 32 bit int, therefore we have a warning
    //In addition, it will be truncated to the first 4 byte, so the value won't makes sense
    printf("Address from 64 to 32 of a is %d\n", a_pt);

    //In this case we are using a 64 bit
    printf("Address 64 of a: %p\n", (void*)a_pt);

    //If you see only 12 char for the hex address it is becasue most of the processore uses 48 bit in order to save memory
    printf("Address of a ex trunc is %x\n", a_pt_trunc);

    //DEFERENCING A POINTER WITH *
    //We can access the value using * operator against a pointer
    *a_pt += 1;
    printf("New value of a: %d\n", a);

    //ARRAY AND POINTER
    printf("ARRAY AND POINTER \n");
    
    int a_arr[] = {1,2};
    printf("a[0]: %d\n", a_arr);
    printf("a[0]: %d\n", *a_arr);
    printf("a[1]: %d\n", *a_arr+1);
    printf("a[0]: %d\n", *(&a_arr+1));

    //It will show the size of int as byte, so 8
    printf("%d\n", sizeof(a_arr));

    
}