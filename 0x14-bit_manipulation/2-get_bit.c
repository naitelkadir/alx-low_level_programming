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
	unsigned long int len = 0;
	
	while (n)
	{
		if (index == len)
		{
			if (n % 2)
			{
				return (1);
			}
			else
			{
				return (0);
			}
		}
		n = n / 2;
		len++;
	}
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
}
