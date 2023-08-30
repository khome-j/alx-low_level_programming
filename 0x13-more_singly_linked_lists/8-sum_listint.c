#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data of a linked
 * list
 * @head: head pointer
 *
 * Return: sum of data in all node, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;

	if (temp == NULL)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
