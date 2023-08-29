#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a list
 * @h: header pointer
 *
 * Return: the number of nodes on success
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0; /*number of nodes*/

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}



