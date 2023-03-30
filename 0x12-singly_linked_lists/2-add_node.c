#include <stdlib.h>
#include <string.h>
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
newNode = malloc(sizeof(list_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->str = strdup(str);
newNode->len = _strlen(str);
newNode->next = *head;
*head = newNode;
return (*head);
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
while (s[c] != '\0')
{
c++;
}
return (c);
}
