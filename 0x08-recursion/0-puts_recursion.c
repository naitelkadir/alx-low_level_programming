#include "main.h"

/**
  * _puts_recursion - Print a string followed by a new line
  * @s: the string to print
  *
  * Return: Nothing.
  */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s = s + 1;
		_puts_recursion(s);
	}
	_putchar('\n');
}
