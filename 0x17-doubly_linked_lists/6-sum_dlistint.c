#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - ...
 * @head: ...
 * Return:...
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;
	dlistint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		s = s + tmp->n;
		tmp = tmp->next;
	}
	return (s);
}
