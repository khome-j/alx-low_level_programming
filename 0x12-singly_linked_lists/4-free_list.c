#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: data type of struct list_s
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head))
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
