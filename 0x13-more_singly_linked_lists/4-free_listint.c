#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: head pointer
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head))
	{
		head = head->next;
		free(tmp);
	}
}
