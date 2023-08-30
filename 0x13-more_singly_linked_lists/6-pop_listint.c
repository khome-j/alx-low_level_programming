#include "lists.h"


/**
 * pop_listint - a function that deletes the head node of a listint_t linked
 * list
 * @head: address of the head pointer
 *
 * Return: the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	tmp = *head;

	if (tmp == NULL)
		return (0);

	data = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (data);
}
