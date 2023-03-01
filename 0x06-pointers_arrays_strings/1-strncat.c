#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of max bytes to be used
 * Return: Always 0 (Success)
 */


char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	
	}
	for (j = 0; src[j] != '\0' && 0 < n; n--; i++; j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
