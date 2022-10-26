#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a list
 * @head: pointer of type listint
 * @index: the index of the node
 *
 * Return: NULL if the node does not exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;


	node = 0;
	while (head != (listint_t *) 0)
	{
		if (node == index)
			return (head);
		head = head->next;
		node++;
	}
	return (NULL);
}
