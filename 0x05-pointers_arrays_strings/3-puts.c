#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: string
 */
void _puts(char *str)
{
	int i;
	char ch;

	i = 1;
	ch = str[0];
	while (ch != '\0')
	{
		_putchar(ch);
		ch = str[i++];
	}
	_putchar('\n');
}
