#include "main.h"

/**
 * leet : a function that encoded string 
 * @n: input
 * Return: the encoded string
 */
char *leet(char *n)
{
	int i, j;
	int elite[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int every[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (n[i] == elite[j])
			{
				n[i] = every[j / 2];
				x = 9;
			}
		}
	}
	return (n);
}
