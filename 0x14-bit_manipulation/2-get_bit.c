#include <stdio.h>
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
	int arr[100];
	unsigned long int i;
	unsigned long int len = 0;
	
	while (n > 0)
	{
		if (n % 2 == 1)
		{
			arr[len] = 1;
		}
		else
		{
			arr[len] = 0;
		}
		n = n / 2;
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (i == index)
		{
			return (arr[i]);
		}
	}
	if (index > len )
	{
		return (-1);
	}
}

