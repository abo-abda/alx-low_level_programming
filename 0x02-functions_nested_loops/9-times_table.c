#include "main.h"

/**
 * times_table - prints the 9 times table
 *  starting with 0
 */

void times_table(void)
{
	int i,j,z;
	for(i = 0; i <= 9; i++)
	{
		for(j = 0; j <= 9; j++)
		{
		z = i * j;
		if(z == 0)
		{
			_putchar(z + '0');
		}
		if(z < 10 && j != 0)
		{
		_putchar(',');
                _putchar(' ');
                _putchar(' ');
                _putchar(z + '0');
		}
		else if(z >= 10)
		{
		_putchar(',');
		_putchar(' ');
		_putchar((z / 10) + '0');
		_putchar((z % 10) + '0');
		}
		}
		_putchar('\n');
	}
	}
