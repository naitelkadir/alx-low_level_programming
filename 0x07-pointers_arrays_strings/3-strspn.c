#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned i, j, c, n;
	
	c = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		n = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				c++;
				n = 1;
			}
		}
		if (n == 0)
		{
			return (c);
		}
	}
	return (c);
}
