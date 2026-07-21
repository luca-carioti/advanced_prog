#include <stdio.h>
#include <stdlib.h>

int main(void) {

    //Struct are a special variable in c
    //A struct is defined with the keyword struct
    struct point {
        int x;
        int y;
    };

    //When a struct is declared or initialized, it is always used struct name_of_struct
    struct point a;
    a.x = 5;
    a.y = 5;

    /*
     * We can use struct to pass multiple argument to a function
    */
    void print_point(struct point p) {
        printf("p : {x: %d, y: %d}\n", p.x, p.y);
    }

    print_point(a);

    /* 
     * The struct is passed by value in this case and not by reference
     * This means that the function modify the local variable and not the original one
    */
    void print_modify_point(struct point p) {
        p.x = p.x + 1;
        p.y = p.y + 1;
        printf("p_mod : {x: %d, y: %d}\n", p.x, p.y);
    }

    print_modify_point(a);
    //Print the original point to see if it has changed
    //As you can see, the original variable has not been modified
    printf("a : {x: %d, y: %d}\n", a.x, a.y);

    //###################################### TYPEDEF ###############################################################
    /*
     * typdef allow us to define types with different names, so we can avoid using the long definition
     * as previously seen
     * This is also usefull when we need a structure and a pointer of that structure
    */
   typedef struct {
        int x;
        int y;
   } point_td, *p_point_td;

   point_td pt_td;
   pt_td.x = 5;
   pt_td.y = 6;

   printf("pt_td : {x: %d, y: %d}\n", pt_td.x, pt_td.y);

   //Struct can also contain pointer
   typedef struct {
        char *brand;
        int year;
   } veicle;

   veicle v;
   v.brand = "FIAT";
   v.year = 2001;

   printf("v: {brand: %s, year: %d}\n", v.brand, v.year);
   

   return EXIT_SUCCESS;
}