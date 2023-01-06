#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a double list
 * @h: a pointer to the head start of struct dlistint_s type
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t count;


	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != (dlistint_t *) 0)
		h = h->prev;

	while (h != (dlistint_t *) 0)
	{
		printf("%i\n", h->n);
		h = h->next;
		count += 1;
	}
	return (count);
}
