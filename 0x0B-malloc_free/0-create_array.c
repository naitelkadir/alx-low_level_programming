#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars initialized w/ specific char
 * @size: Size of the array
 * @c: Char to initialize with
 *
 * Return: Pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;
	
	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	arr[i] = '\0';
	return(arr);
}
