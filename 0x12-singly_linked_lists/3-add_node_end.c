#include "lists.h"


/**
 * add_node_end - a function that adds a new node at the end of a list_t
 * @head: double pointer
 * @str: a constant string character
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	int len = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;


	temp = *head;
	newnode->str = strdup(str);
	newnode->len = len;

	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->next = NULL;
	}

	return (newnode);
}
