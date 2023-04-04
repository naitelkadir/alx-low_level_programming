#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list
 * @head: pointer to the first element in a linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr;
	
	while (*head != NULL)
	{
		curr = *head;
		*head = (*head)->next;
		curr->next = prev;
		prev = curr;
	}
	*head = prev;
	return (*head);
}
