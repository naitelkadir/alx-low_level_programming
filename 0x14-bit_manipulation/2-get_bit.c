#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - ...
 * @n: ...
 * @index: ...
 *
 * Return: ...
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int len = 1;

	len <<= index;
	if (len & n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	if (index > sizeof(n) * 8 && index < 63)
	{
		return (0);
	}
	return (-1);
}
