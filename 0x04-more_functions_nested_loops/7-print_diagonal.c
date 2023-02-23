#include"main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
 */
void print_diagonal(int n)
{
	int c;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		c = 1;
		while (c <= n)
		{
			_putchar(' ');
			c++;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
