#include <stdio.h>
#include "lists.h"

/*
 * listint_len - Returns the number of elements in a linked list
 * @h: Linked list
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t c = 0;
while (h != NULL)
{
c++;
h = h->next;
}
return (c);
}
