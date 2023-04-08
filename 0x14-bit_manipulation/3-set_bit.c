#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - ...
 * @n: ...
 *@index: ...
 *
 * Return: ...
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	else
	{
		int clearbit = ~(1 << index);
		int mask = *n & clearbit;
		*n = mask |(1 << index);
		return (1);
	}
}
