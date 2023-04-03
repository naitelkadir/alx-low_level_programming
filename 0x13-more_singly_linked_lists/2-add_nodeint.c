#include <stdlib.h>
#include "lists.h"

/*
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: A pointer to the first element in a linked list 
 * @n: The value to add the new node
 *
 * Return: The adress of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;
if (head != NULL)
{
newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
newnode->next = *head;
*head = newnode;
return (newnode);
}
return (NULL);
}
