#include "main.h"

/*
 * int print_sign ,prints the sign of a number.
 * test n:  Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */

int print_sign(int n)
{

	if(n >= 0)
	{
		return(1);
	       _putchar('+');
	}
	       else if(n == 0)
	{
		return(0);
	       _putchar('0');
	}
	       else  if(n < 0)
      {
	      return(-1);
        	_putchar('-');
	}
}
