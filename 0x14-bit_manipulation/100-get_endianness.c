#include <stdio.h>
#include "main.h"

/**
 * get_endianness - ...
 * Return: ...
 */
int get_endianness(void)
{
	unsigned int n;
	char *c = (char *)&n;

	if (*c == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
