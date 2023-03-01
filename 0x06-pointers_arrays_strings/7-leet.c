#include "main.h"

/**
 * leet : a function that encoded string 
 * @n: input
 * Return: the encoded string
 */
char *leet(char *n)
{
	int i, x;
	char find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replacer[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (n[i] == find[x])
			{
				n[i] = replacer[x / 2];
				x = 9;
			}
		}
	}
	return (n);
}
