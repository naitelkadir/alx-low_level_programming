#include <stdio.h>
#include "main.h"

/**
 * print_binary - ...
 * @n: ...
 * 
 * Return: ...
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin = 0;
	unsigned long int i = 1;
	unsigned long int rem;
	
	while (n != 0)
	{
		rem = n % 2;
		n = n / 2;
		bin = bin + rem * i;
		i = i * 10;
	}
	convert(bin);
}

/**
 * convert - ...
 * @bin: ...
 *
 * Return: void
 */
void convert(unsigned long int bin)
{
	unsigned long int d, r;
	
	if (bin < 10)
	{
		_putchar(bin + '0');
	}
	else
	{
		d = bin / 10;
		r = bin % 10;
		convert(d);
		_putchar(r + '0');
	}
}
