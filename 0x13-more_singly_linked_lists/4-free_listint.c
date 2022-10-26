#include "lists.h"

/**
 * free_listint - a function that frees a list
 * @head: pointer of type listint
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;


	while (head != (listint_t *) 0)
	{
		temp =  head->next;
		free(head);
		head = temp;
	}
}
