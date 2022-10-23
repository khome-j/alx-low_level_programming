#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - a function that adds a new node at the beginning
 * @head: a double pointer head
 * @str: a char string
 *
 * Return: the address of the new element or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int i = 0, _strlen = 0;

	newNode = malloc(sizeof(list_t *));
	if (newNode == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		_strlen += 1;
		i++;
	}
	newNode->len = _strlen;
	newNode->str = strdup(str);
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
