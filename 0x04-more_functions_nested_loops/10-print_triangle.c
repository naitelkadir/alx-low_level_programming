#include"main.h"

/**
 * print_triangle - print a triangle aligned right, using '#'
 * @size: Size of triangle
 */

void print_triangle(int size)
{
	int i, j, k;
	
	if (size <= 0)
	{
		_putchar('0');
	}
	for (i = 1;i <= size; i++)
	{
		for (j = 1; j <= size -i; j++)
		{
			_putchar(' ');
		}
		for (k = size -i + 1; k <= size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
