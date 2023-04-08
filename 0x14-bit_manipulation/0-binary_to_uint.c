#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - ...
 * @b: pointer to string to be converted
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0;
	unsigned int i = 0;
	unsigned int decimal = 0;
	
	if (b == NULL)
	{
		return (0);
	}
	while (b[len] != '\0')
	{
		len++;
	}
	while (len--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[len] == '1')
		{
			decimal = decimal + (1 << i);
		}
		i++;
	}
	return (decimal);
}
