#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of int
 * @a: content
 * @n: elements of content
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i, rev;
	for (i = 0; i < n; i++)
	{
		n--;
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
	}
	
}
