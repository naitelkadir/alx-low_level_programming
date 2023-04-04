#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t printf_listint_safe(const listint_t *head)
{
	listint_t *tmp;
	size_t c = 0;
	tmp = head;
	while (tmp != NULL)
	{
		c++;
		printf("[%p] %d\n",(void *)tmp, tmp->n);
		if (tmp < tmp->next)
		{
			tmp = tmp->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)tmp->next, tmp->next->n);
			exit(98);
		}
	}
	return (c);
}
