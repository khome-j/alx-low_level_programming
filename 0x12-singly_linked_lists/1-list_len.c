#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: a pointer to the head node
 *
 * Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t count;
	const list_t *tmp;

	tmp = h;

	count = 0;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
