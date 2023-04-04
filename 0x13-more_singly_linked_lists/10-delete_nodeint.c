#include <stdio.h>
#include <stdlib.h>
#include "lists.s"

/**
 * delete_nodeint_at_index - A function that deletes the node at index of a linked list
 * @head: The pointer to th first node of a linked list
 * @index:  The index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;
	
	if (index == 0)
	{
		*head = (*head)->next;
		free(*head);
		return (1);
	}
	else
	{
		tmp = *head;
		for (i = 1; i < index; i++)
		{
			if (tmp == NULL)
			{
				return (-1);
			}
			tmp = tmp->next;
		}
		tmp->next = tmp->next->next;
		free(tmp->next);
		return (1);
	}
}
