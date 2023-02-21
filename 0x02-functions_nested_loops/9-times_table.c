#include "main.h"

/**
 * times_table - a function that prints times table of 9
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (b = 1; b <= 9; b++)
		{
			c = a * b;
			if ((c / 10) > 0)
			{
				_putchar('0' + c / 10);
			}
			else
			{
				_putchar(' ');
			}

			_putchar('0' + (c % 10));

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
