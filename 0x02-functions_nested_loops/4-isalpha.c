#include "main.h"

/**
 * _isalpha - a function that checks if a caracter is an alphabet
 * @c a single letter input
 * Return: 1 if int c is an alphabet, 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && ch <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
