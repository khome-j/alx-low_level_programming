#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: head pointer
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while ((tmp = *head))
	{
		*head = tmp->next;
		free(tmp);
	}
	*head = NULL;
}
