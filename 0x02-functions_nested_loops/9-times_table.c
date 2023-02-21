#include "main.h"

/**
 * times_table - a function that prints times table of 9
 */

void times_table(void)
{
	int a, b, c;
	
	for (a = 0; a <= 9; a++)
	{
		putchar('0');
		putchar(',');
		putchar(' ');
		for (b = 1; b <= 9; b++)
		{
			c = a * b;
			if ((c / 10) > 0)
			{
				putchar('0' + c / 10);
			}
			else
			{
				putchar(' ');
			}
			putchar('0' + (c % 10));
			if (b < 9)
				putchar(',');
				putchar(' ');
		}
		putchar('\n');
	}
}
