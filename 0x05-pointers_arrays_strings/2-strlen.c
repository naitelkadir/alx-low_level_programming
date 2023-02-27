#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int c;
	
	c = 0;
	while (*s)
	{
		s = s + 1;
		c++;
	}
	return (c);
}
