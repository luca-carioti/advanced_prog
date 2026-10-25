#include <stdio.h>
#include <stdlib.h>

int *copy_array(const int *src, size_t n) {
    if(src == NULL) {
        fprintf(stderr, "Erroraccio \n");
        return EXIT_FAILURE;
    }
     int *copy = (int*) malloc(n * sizeof(int));
     if(copy == NULL) {
        fprintf(stderr, "Errorone \n");
        return EXIT_FAILURE;
     }
     for(int i=0; i<n; i++) {
        *(copy + i) = *(src + i);
     }
     return copy;
   }

int main(void) {

    /*
     In questa sessione ci concentreremo su:
     - Puntatori
     - Malloc, free
     - Un po di aritmetica dei puntatori
    */

    /*
    In questo caso numbers sarà un puntatore e conterrà l'indirizzo del primo int
    dell'area allocata
     int *numbers = (*int) malloc(3 * sizeof(int))

     numbers[0] == *(numbers + 0)
     ...
     numbers[i] == *(numbers + i)
    */

    /*
    Esercizio 1:
    Crea un array dinamico di 5 int e riempilo con i quadrati dei numeri da 1 a 5
    */
    printf("################################## \n PRIMO ESERCIZIO \n################################## \n");
    int *numbers5 = (int*) malloc(5 * sizeof(int));
    if(numbers5 == NULL) {
        fprintf(stderr, "Error allocating number5");
        return EXIT_FAILURE;
    }

    for(int i=0; i<5; i++) {
        //numbers5[i] = (i+1) * (i+1);
        *(numbers5 + i) = (i+1) * (i+1);
    }

    //Print the array
    for(int i=0; i<5; i++) {
       printf("numbers5[%d] = %d \n", i, numbers5[i]); 
    }

    printf("%d \n", sizeof(numbers5));

    free(numbers5);
    numbers5 = NULL;

    //------------------------ ESERCIZIO 2 -----------------------------------------
    /*
    Chiedi all'utente n, alloca un array di n interi, leggili da input, stampalo
    */
   printf("################################## \n SECONDO ESERCIZIO \n################################## \n");
   int n;
   printf("Ciao, dammi il numero n, testa di cazzo \n");
   scanf("%d", &n);

   int *nArray = (int*) malloc(n * sizeof(int));
   if(nArray == NULL) {
    fprintf(stderr, "Errore allocando nArray");
    return EXIT_FAILURE;
   }

   for(int i=0; i<n; i++){
    printf("nArray[%d]: ", i);
    scanf("%d", &nArray[i]);
   }

   for(int i=0; i<n; i++){
    printf("nArray[%d] = %d \n", i, nArray[i]);
   }

   free(nArray);
   nArray = NULL;

   //---------------------- ESERCIZIO 3 ----------------------------
   /*
   Implementa:
   int *copy_array(const int *src, size_t n)
   */
  printf("Debug HEre \n");
   int tp_be_copied[] = {1,2,3,4};
   int size = sizeof(tp_be_copied) / sizeof(tp_be_copied[0]);
   int *copied = copy_array(tp_be_copied, size);

   for(int i=0; i<size; i++){
    printf("copied[%d]: %d \n", i, *(copied + i));
   }

   free(copied);
   //Perchè dopo free non posso leggere?
   printf("%ld \n", copied);
   printf("%d \n", *copied);
   copied = NULL;


   return EXIT_SUCCESS;
}