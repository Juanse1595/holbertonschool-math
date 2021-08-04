#include "holberton.h"

/**
  * display_complex_numbers - prints complex numbers
  * @c: complex number
  */

void display_complex_number(complex c)
{
	if (c.im > 0)
		printf("%.f + %.fi\n", c.re, c.im);
	else if (c.im < 0)
	{
		c.im = c.im * -1;
		printf("%.f - %.fi\n", c.re, c.im);
	}
	else
		printf("%.f\n", c.re);
}
