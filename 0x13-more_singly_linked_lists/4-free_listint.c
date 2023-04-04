#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
 * free_listint - A function that frees a linked list
 * @head: The pointer to the fisrt element in the linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *newlist;
	while (head != NULL)
	{
		newlist = head;
		head = head->next;
		free(newlist);
	}
}
