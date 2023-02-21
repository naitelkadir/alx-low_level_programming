#include "main.h"

/**
 * print_sign - a function that checks if a caracter is an alphabet
 * @n : a number input
 * Return: 1 if int n is positive, 0 if int n is 0 ,(-1) if int is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
