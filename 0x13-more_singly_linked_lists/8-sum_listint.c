#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data(n)
 * of a list
 * @head: pointer of type listint
 *
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head != (listint_t *) 0)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
