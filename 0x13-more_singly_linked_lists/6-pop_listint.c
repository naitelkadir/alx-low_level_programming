#include <stdio.h>
#include "lists.h"

/*
 * pop_listint - Deletes the head node of a linked list
 * @head: The pointer to the first node in a linked list
 *
 * Return: The head node's data or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int m;
	if (*head != NULL)
	{
		m = (*head)->n
		*head = (*head)->next;
		return (m);
	}
	return (0);
}
