#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	
	for (i = 0; dest[i] != '\0'; i++)
	{
	
	}
	for (j = 0;src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
