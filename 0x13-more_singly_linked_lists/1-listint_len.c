#include "lists.h"


/**
 * listint_len - a function counts the number of elements in a list
 * @h: head pointer
 *
 * Return: the number of elements in a linked list(listint_t)
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		++count;
		h = h->next;
	}
	return (count);
}
