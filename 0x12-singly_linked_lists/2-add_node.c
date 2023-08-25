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
	list_t *newnode, *tmp;

	int i;

	newnode = malloc(sizeof(*newnode));

	if (newnode == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	newnode->str = malloc(sizeof(char *));
	newnode->str = strdup(str);
	tmp = *head;
	if (*head == NULL)
		tmp = newnode;
	else
	{
		newnode->next = tmp;
		tmp = newnode;
	}
	newnode->len = i;

	return (newnode);
}
