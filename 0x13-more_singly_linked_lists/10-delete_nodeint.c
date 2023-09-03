#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index of a
 * linked list
 * @head: head pointer to the head node
 * @index: index of the node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	current = *head;
	prev = *head;
	if (index == 0) /*we have to delete the first node*/
	{
		*head = current->next;
		free(current);
		return (1);
	}
	else
	{
		while (current)
		{
			if (count == index)
			{
				prev->next = current->next;
				free(current);
				return (1);
			}
			prev = current;
			current = current->next;
			++count;
		}
	}
	return (-1);
}
