#include <stdlib.h>
#include "lists.h"

/*
 * add_nodeint-end - ...
 * @head: ...
 * @n: ...
 *
 * Return: ...
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode;
listint_t *tmp;

if (head != NULL)
{
newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
*head = newnode;
return (*head);
}
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = newnode;
return (tmp);
}
return (NULL);
}
