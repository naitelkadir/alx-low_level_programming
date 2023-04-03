#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of a liked list
 * @h: Linked list
 *
 * Return : The numne of nodes
 */
size_t print_listint(const listint_t *h)
{
int c = 0;
if (h != NULL)
{
while (h != NULL)
{
printf("%d\n", h->n);
c++;
h = h->next;
}
}
return (c);
}
