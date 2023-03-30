#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_node - adds a new node at the beginning of  list
 *@head: the original linked list
 *@str: the string to add to the node
 *Return: the adresse of the nex list or NULL if it failed
 */		
list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;
if (str != Null)
{
newNode = malloc(sizeof(list_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->str = strdup(str);
newNode->len = strlen(str);
newNode->next = *head;
*head = newNode;
return (newNode);
}
}
