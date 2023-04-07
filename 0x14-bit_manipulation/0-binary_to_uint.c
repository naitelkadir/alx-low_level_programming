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
	unsigned int i;
	unsigned int decimal = 0;
	
	if (b == NULL)
	{
		return (0);
	}
	while (b[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (b[i] != 48 && b[i] != 49)
		{
			return (0);
		}
		if (b[len - 1 - i] == 49)
		{
			decimal = decimal + 1 << i;
		}
	}
	return (decimal);
}
