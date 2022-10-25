#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning
 * @head: pointer of type listint
 * @n: an integer
 *
 * Return: the address of the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t *));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);

}
