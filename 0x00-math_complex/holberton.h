#ifndef MATH_H
#define MATH_H

#include <stdio.h>
#include <math.h>

/**
  * struct com - structure that contains the real and
  * imaginary part of a complex number
  * @re: real part
  * @im: imaginary part
  * Description: complex numbers
  */

typedef struct com
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg(double m, double arg, complex *c3);

#endif /* MATH_H */
