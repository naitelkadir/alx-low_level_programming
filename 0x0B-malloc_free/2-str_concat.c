#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenate (combine) two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to new space in memory, NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *str, *empt;
	int i, j, a, b;
	
	a = 0;
	b = 0;
	empt = "";
	if (s1 == NULL)
	{
		s1 = empt;
	}
	if (s2 == NULL)
	{
		s2 = empt;
	}
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	str = malloc((a + b + 1) * sizeof(char));
	if ( str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		str[a + j] = s2[j];
	}
	str[a + b] = '\0';
	return (str);
}

