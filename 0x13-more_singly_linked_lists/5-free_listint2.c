#include "lists.h"

/**
 * free_listint2 - a function that frees a list
 * @head: a pointer of type listint_t
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != (listint_t *) 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
