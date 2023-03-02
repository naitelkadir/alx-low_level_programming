#include "main.h"

/**
 * leet : a function that encoded string 
 * @n: input
 * Return: the encoded string
 */
char *leet(char *n)
{
	int a = 0, b = 0, l = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char s[5] = {'4', '3', '0', '7', '1'};

	while (n[a])
	{
		b = 0;

		while (b < l)
		{
			if (n[a] == r[b] || n[a] - 32 == r[b])
			{
				n[a] = s[b];
			}

			b++;
		}

		a++;
	}

	return (n);
}

