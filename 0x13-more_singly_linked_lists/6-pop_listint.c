#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
 * pop_listint - Deletes the head node of a linked list
 * @head: The pointer to the first node in a linked list
 *
 * Return: The head node's data or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int m = 0;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	m = tmp->n;
	free(tmp);
	*head = tmp->next;
	return (m);
}
