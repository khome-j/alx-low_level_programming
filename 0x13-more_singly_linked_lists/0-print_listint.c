#include "lists.h"

/**
 * print_listint - a function that prints all the elements
 * @h: pointer of type listint
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int node = 0;

	while (h != (listint_t *) 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
