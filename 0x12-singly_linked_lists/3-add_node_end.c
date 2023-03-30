#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node_end - Adds a new node at the end of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */	
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode;
list_t *tmp;
if (str != NULL)
{
newNode = malloc(sizeof(list_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->str = strdup(str);
newNode->len = _strlen(str);
newNode->next = NULL;
if (*head == NULL)
{
*head = newNode;
return (*head);
}
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = newNode;
return(tmp);
}
return (NULL);
}
/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
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
