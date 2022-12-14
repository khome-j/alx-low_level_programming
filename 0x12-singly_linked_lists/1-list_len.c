#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: a pointer of struct type list_s
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != (list_t *) 0)
	{
		node++;
		h = h->next;
	}
	return (node);
}
