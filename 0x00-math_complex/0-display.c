#include "holberton.h"

/**
  * display_complex_number - prints complex numbers
  * @c: complex number
  */

void display_complex_number(complex c)
{
	if (c.re != 0)
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
	else
	{
		if (c.im != 0)
			printf("%.fi\n", c.im);
		else
			printf("\n");
	}
}
