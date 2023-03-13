#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Return pointer to a new string that duplicates given string,
 * allocate mem w/ malloc
 * @str: String to duplicate
 *
 * Return: Pointer to new string, NULL if failed to make memory
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int c = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[c] != '\0')
	{
		c++;
	}
	s = malloc((c + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= c; i++)
	{
		s[i] = str[i];
	}
	s[c] = '\0';
	return (s);
}
