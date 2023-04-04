#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - ...
 * @head: ...
 * @idx: ...
 * @n: ...
 *
 * Return: ...
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode;
	listint_t *tmp;

if (head != NULL)
{
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	if (idx <= 0)
	{
		newnode->next = *head;
                *head = newnode;
		return (*head);
	}
	else
	{
		tmp = *head;
		for (i = 1; i < idx; i++)
		{
			if (tmp == NULL)
			{
				return (NULL);
			}
			tmp = tmp->next;
		}
		newnode->next = tmp->next;
		tmp->next = newnode;
		return (tmp);
	}
}
return (NULL);
}
