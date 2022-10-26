#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a list
 * @head: pointer of type listint
 *
 * Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);


	temp = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = temp;
	return (i);
}
