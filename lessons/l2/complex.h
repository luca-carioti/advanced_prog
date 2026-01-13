//ifndef check if the header has been already included
//define if it is not, then include the header
//They are called include guards

#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct {
	double re;
	double im;
} complex;

complex add(complex, complex);
complex sub(complex, complex);

#endif
