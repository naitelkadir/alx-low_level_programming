#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe: frees a listint_t list
 * @h: the pointer to the first node of linked list
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr, *next;
	size_t c = 0;
	
	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	curr = *h;
	while (curr != NULL)
	{
		c++;
		next = curr->next;
		free(curr);
		if (next >= curr)
		{
			return (c);
		}
		curr = next;
	}
	*h = NULL;
	return (c);
}
