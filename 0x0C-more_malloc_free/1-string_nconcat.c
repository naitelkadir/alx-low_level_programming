#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - len of 1st str, len of 2nd str, if n < 2nd, 2nd = n
 * 2nd + 1st = total len, malloc + null byte, loop to insert into temp arr
 * @s1: input one
 * @s2: input two
 * @n: s2's number of bytes
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str, *empt;
	int i, j, a;
	
	a = 0;
	empt = "";
	if (s1 == NULL)
	{
		s1 == empt;
	}
	if (s2 == NULL)
	{
		s2 = empt;
	}
	while (s1[a] != '\0')
	{
		a++;
	}
	str = malloc((a + n + 1) * sizeof(char));
	if ( str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n & s2[j] != '\0'; j++)
	{
		str[a + j] = s2[j];
	}
	str[a + n] = '\0';
	return (str);
}
