#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list
 * @head: the address to the head node
 * @str: a string character
 *
 * Return: a pointer to the new element, NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	
	if (str == NULL)
		return (NULL);

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);

	printf("*head = %zu\n", *head);
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

	return (*head);
}

