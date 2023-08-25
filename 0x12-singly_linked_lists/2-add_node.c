#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list
 * @head: double pointer
 * @str: strings
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	int i;

	newnode = malloc(sizeof(*newnode));

	if (newnode == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	newnode->str = strdup(str);
	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
	}
	else
	{
		newnode->next = *head;
		*head = newnode;
	}
	newnode->len = i;

	return (newnode);
}
