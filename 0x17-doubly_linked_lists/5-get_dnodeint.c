#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that return the ndth node
 * @head: ...
 * @index: ...
 * Return: ...
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int pos = 0;

	tmp = head;
	while (pos < index)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}
		else
		{
			tmp = tmp->next;
		}
		pos++;
	}
	return (tmp);
}
