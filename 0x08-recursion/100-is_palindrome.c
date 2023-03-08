#include "main.h"

int isPalRec(char *s, int i, int e);
int _strlen_recursion(char *s);

/**
  * is_palindrome - Returns if a string is palindrome
  * @s: the string value to be checked
  *
  * Return: integer value
  */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
		return (1);
	return (isPalRec(s, 0, n - 1));
}
/**
  * isPalRec - Check if a string is palindrome
  * @s: the string value to be checked
  * @i: first index
  * @e: second index
  * Return: integer value
  */
int isPalRec(char *s, int i, int e)
{
	if (i == e)
		return (1);
	if (s[i] != s[e])
		return (0);
	if (i < e + 1)
		return (isPalRec(s, i + 1, e - 1));
	return (1);
}
/**
  * _strlen_recursion - Get the length of a string
  * @s: the string to get the length
  *
  * Return: the string length
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
