#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data (n) of a linked list
 * @head: The linked list
 * 
 * Return: The sum of all the data (n) of a linked list or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
