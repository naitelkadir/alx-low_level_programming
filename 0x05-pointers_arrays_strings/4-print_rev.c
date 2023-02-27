#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * fcounter is to first count to end, n is to count back
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int i, j, c;
	
	c = 0;
	for (i = 0; s[i] != 0; i++)
	{
		c++;
	}
	for (j = c - 1; j >= 0; j--)
	{
		putchar(s[j]);
	}
	putchar('\n');
}
