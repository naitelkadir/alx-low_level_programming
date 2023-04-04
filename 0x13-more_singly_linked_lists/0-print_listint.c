#include <stdio.h>
#include "lists.h"

/**
 * print_listint - ...
 * @h: ...
 * Return: ...
 */
size_t print_listint(const listint_t *h)
{
	unsigned int c = 0;
	
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
