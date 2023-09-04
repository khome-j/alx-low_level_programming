#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: a pointer to the headnode
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	next = *head;

	while (next)
	{
		next = next->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
