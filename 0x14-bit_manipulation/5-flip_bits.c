#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - ...
 * @n: ...
 * @m: ...
 *
 * Return: ...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	unsigned int count = 0;
	
	while (a > 0)
	{
		count++;
		a &= (a - 1);
	}
	return (count);
}
