#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
 * free_listint2 - A function that frees a linked list and sets head to NULL
 * @head: The pointer to the fisrt element in the linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *newlist;
	if (head == NULL)
	{
		return;
	}
	tmp = *head;
	while (tmp != NULL)
	{
		newlist = tmp;
		tmp = tmp->next;
		free(newlist);
	}
	*head = NULL;
}
