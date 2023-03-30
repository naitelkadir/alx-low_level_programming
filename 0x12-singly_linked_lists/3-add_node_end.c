#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_node_end - adds node at the end of a list
 *@head: the original linked list
 *@str: the string to add to the node
 *
 *Return: The adress of new list or NULL if it failed
 */	
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode;
list_t *tmp;
newNode = malloc(sizeof(list_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->str = strdup(str);
newNode->len = _strlen(str);
if (*head = NULL)
{
*head = newNode;
newNode->next = NULL;
return (*head);
}
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = newNode;
newNode->next = NULL;
return(tmp);
}
/**
 *_strlen - returns the length if a string
 *@s: string to count
 *
 *Return: string length
 */
int _strlen(const char *s)
{
int c = 0;
while (s[c] != NULL)
{
c++;
}
return (c);
}
