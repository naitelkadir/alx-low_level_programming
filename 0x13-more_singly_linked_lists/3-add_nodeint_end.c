#include <stdlib.h>
#include "lists.h"

/*
 * add_nodeint-end - Adds a new nde at the end of a linked list 
 * @head: A pointer to the first element in a linked list
 * @n: The value to add to the new node
 *
 * Return: the adress of the new element or NULL if it failed
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
tmp = *head->next;
while (tmp != NULL)
{
tmp = tmp->next;
}
tmp->next = newnode;
return (tmp);
}
return (NULL);
}
