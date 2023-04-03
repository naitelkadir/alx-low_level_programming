#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a linked list or NULL if the index does not exist
 * @head: linked list
 * @index: The index of the node
 *
 * Return: The adress of the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	for (i = 0; i < index; i++)
	{
		
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return(head);
}
