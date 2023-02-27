#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i, c, n;
	
	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	n = c / 2;
	if (c % 2 == 1)
	{
		n = (c + 1) / 2;
	}
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
