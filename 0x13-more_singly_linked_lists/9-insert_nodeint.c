#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at a given
 * position
 * @head: address of the head pointer
 * @idx: index of the list where the new node should be added.
 * @n: the data of the newnode
 *
 * Return: the address of the new node, or NULL if newnode fails to be added
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *tmp;

	unsigned int count = 0;


	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);


	tmp = *head;

	while (tmp)
	{
		count++;
		if (count == idx)
		{
			newnode->next = tmp->next;
			tmp->next = newnode;
			newnode->n = n;
			return (newnode);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
