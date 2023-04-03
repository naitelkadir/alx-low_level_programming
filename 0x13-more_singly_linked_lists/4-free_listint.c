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
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
