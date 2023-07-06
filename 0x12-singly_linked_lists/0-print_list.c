#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list.
 * @h: head pointer
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t n;
	const list_t *tmp;

	tmp = h;
	n = 0;
	while (tmp)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", tmp->len, tmp->str);
		n++;
		tmp = tmp->next;
	}
	return (n);
}
