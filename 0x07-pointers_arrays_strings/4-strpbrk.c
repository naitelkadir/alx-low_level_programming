#include "main.h"

/**
  * _strpbrk - search a string for any of a set of bytes
  * @s: source string
  * @accept: accepted characters
  *
  * Return: the string since the first found accepted character
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	
	for (i = 0; accept[i] != '\0'; i++)
	{
		for(j = 0; s[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				s = s + i;
				return (s);
			}
		}
		
	}
	return (NULL);
}
