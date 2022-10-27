#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at a given
 * position.
 * @head: pointer of type listint
 * @idx: index of the list
 * @n: listint_t data
 * Return: the address of the new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newNode;
	unsigned int i;

	temp = *head;
	newNode = malloc(sizeof(listint_t *));
	newNode->n = n;
	newNode->next = NULL;
	if (newNode == NULL)
		return (NULL);

	i = 0;
	while ((temp != (listint_t *) 0) && i < idx)
	{
		if (i == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
