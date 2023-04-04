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
	unsigned int c = 1;
	listint_t *tmp;
	listint_t *newnode = *head;
	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = newnode->next;
		return (-1);
	}
	tmp = *head;
	while (tmp)
	{
		if (c == index)
		{
			tmp->next = tmp->next->next;
			return (1);
		}
		tmp = tmp->next;
		c++;
	}
	return (-1);
}
