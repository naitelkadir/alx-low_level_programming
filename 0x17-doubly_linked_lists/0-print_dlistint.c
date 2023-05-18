#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - ...
 * @h: ...
 * Return: ...
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;
	
	while (h != NULL)
	{
		c++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
