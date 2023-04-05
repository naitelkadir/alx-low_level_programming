#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr;
	size_t c = 0;
	
	while (head != NULL)
	{
		printf("[%p] %d\n",(void *)head, head->n);
		c++;
		curr = head;
		head = head->next;
		if (curr <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
	}
	return (c);
}
