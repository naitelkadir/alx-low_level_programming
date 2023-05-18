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
	for (; idx != 1; idx--)
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
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
