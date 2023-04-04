#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node at a given position.
 * @head: The pointer to the first node in the linked list
 * @idx: Is the index of the list where the new node should be added
 * @n: The value of the new node
 *
 * Return: The address of the new node, or NULL if it failed
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
		for (i = 0; i < idx; i++)
		{

			tmp = tmp->next;
		}
		newnode->next = tmp->next;
		tmp->next = newnode;
		return (tmp);
	}
}
return (NULL);
}
