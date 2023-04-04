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
	listint_t *tmp;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
