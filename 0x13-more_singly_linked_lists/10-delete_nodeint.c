#include <stdio.h>
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
	tmp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (tmp == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
	}
	tmp->next = tmp->next->next;
	return (1);
}
