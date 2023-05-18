#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - ...
 * @h: ...
 * @idx: ...
 * @n: ...
 * Return: ...
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int pos;
	dlistint_t *new, *tmp;
	
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	tmp = (*h);
	for (pos = 0; pos < idx; pos++)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}
		else
		{
			tmp = tmp->next;
		}
	}
	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new->prev = tmp->prev;
	new->next = tmp;
	tmp->prev->next = new;
	tmp->prev = new;

	return (new);
}
