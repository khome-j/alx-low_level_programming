#include "lists.h"


/**
 * add_nodeint_end - a function that adds a new node at the end of a list
 * @head: head pointer to the first node
 * @n: integer data
 *
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	temp = *head;

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
	newnode->n = n;
	return (newnode);
}
