#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *list_len - Return the number of elements in a linked list
 *@h: linked list
 *
 *Return: the number of node
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
