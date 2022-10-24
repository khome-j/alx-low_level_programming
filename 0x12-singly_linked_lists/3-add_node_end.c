#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the end
 * @head: a pointer to the head pointer
 * @str: a pointer to the string character
 *
 * Return: address of the new element or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *endNode;
	int _strlen = 0, i = 0;

	temp = *head;
	endNode = malloc(sizeof(list_t *));
	while (str[i])
	{
		_strlen++;
		i++;
	}
	endNode->str = strdup(str);
	endNode->len = _strlen;
	endNode->next = NULL;

	if (*head == NULL)
	{
	*head = endNode;
		return (*head);
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	}
	temp->next = endNode;
	return (endNode);
}
