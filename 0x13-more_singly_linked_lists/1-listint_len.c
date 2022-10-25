#include "lists.h"

/**
 * listint_len - a function that prints all the elements
 * @h: pointer of type listint
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
