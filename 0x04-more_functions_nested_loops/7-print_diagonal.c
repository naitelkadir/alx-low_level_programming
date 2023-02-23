#include"main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
 */
void print_diagonal(int n)
{
	int c;

	c = 1;
	if (n == 0)
	{
		_putchar('\n');
	}
	while (c <= n)
	{
		_putchar(' ');
		c++;
	}
	_putchar('\\');
	_putchar('\n');
}
