#include "main.h"

/**
 * print_times - a function that prints n+1 time table for number n
 * @n: integer input
 */

void print_times_table(int n)
{
	int a, b, c;
	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (b = 1; b <= n; b++)
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

				if (b < n)
				{
					_putchar(',');
					_putchar('  ');
				}
			}
			_putchar('\n');
		}
	}
}
