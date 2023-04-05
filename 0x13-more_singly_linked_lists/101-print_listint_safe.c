#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t printf_listint_safe(const listint_t *head)
{
	const listint_t *tmp;
	size_t c = 0;
	
	while (head !=NULL)
	{
		printf("[%p] %d\n",(void *)tmp, tmp->n);
		c++;
		tmp = head;
		head = head->next;
		if (tmp <= head)
		{
			printf("-> [%p] %d\n", (void *)tmp->next, tmp->next->n);
			exit(98);
		}
	}
	return (c);
}
