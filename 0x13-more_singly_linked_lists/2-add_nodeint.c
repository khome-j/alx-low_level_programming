#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 * @head: head pointer
 * @n:an integer which is the data of n
 *
 * Return: the address of the new element, or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

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
	newnode->n = n;
	return (newnode);
}
