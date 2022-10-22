#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - a function that adds a new node at the beginning
 * @head: a double pointer head
 * @str: a char string
 *
 * Return: the address of the new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);

	}
	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		new->len = i + 1;
	}
	new->next = *head;
	*head = new;
	return (*head);
}
