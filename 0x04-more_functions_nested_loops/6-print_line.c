#include"main.h"

/**
 * print_line - draw a straight line
 * @n: number of times underscore is printed
 * Description: Can only use _putchar to print
 */
void print_line(int n)
{
	int count;

	count = 0;
	while (count < n)
	{
		_putchar('_');

		count++;
	}
	_putchar('\n');
}
