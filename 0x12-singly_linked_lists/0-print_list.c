#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list.
 * @h: a pointer of struct type list_t.
 *
 * Return: the number of nodes, or nil if str is NULL.
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != (list_t *) 0)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%i] %s\n", h->len, h->str);
		node++;
		h = h->next;
	}
	return (node);
}
