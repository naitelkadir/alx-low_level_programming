#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
 * free_listint - ...
 * @head: ...
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
