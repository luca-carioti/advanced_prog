#include "complex.h"

//We use header file to define new type

complex add(complex, complex);
complex sub(complex, complex);

complex add(complex c1, complex c2) {
	complex temp;
	temp.re = c1.re + c2.re;
	temp.im = c1.im + c2.im;
	return temp;
}


complex sub(complex c1, complex c2) {

	complex temp;
	temp.re = c1.re - c2.re;
	temp.im = c1.im - c2.im;
	return temp;
}
