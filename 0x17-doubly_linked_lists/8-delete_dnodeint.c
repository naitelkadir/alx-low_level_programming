#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - ...
 * @head: ...
 * @index: ...
 * Return: ...
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int pos;
	dlistint_t *tmp;
	
	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	for (pos = 1; pos < index + 1; pos++)
	{
		if (tmp == NULL)
		{
			return (-1);
		}
		else
		{
			tmp = tmp->next;
		}
	}
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}

