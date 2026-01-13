#include <stdio.h>
#include "complex.h"

int main(void) {


	//Ask the user two different complex
	complex c1, c2;
	printf("Please anter first complex: \n");
	printf("c1.re: ");
	scanf("%lf", &c1.re);
	printf("c1.im: ");
	scanf("%lf", &c1.im);

	printf("Please enter the second complex: \n");
	printf("c2.re: ");
	scanf("%lf", &c2.re);
	printf("c2.im: ");
	scanf("%lf", &c2.im);

	//Sum the complex number
	complex sum;
	sum = add(c1, c2);
	printf("Sum: {re: %.2lf im: %.2lf} \n", sum.re, sum.im);

	
	return 0;

}
