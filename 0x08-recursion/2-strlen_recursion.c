#include "main.h"

/**
  * _strlen_recursion - Calculate the length of a string
  * @s: the string to count
  *
  * Return: integer value
  */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s = s + 1;
		return (1 + _strlen_recursion(s));
	}
}
