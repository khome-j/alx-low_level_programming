#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: head pointer to the headnode
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count, new_count;
	const listint_t *tmp, *new_tmp;

	tmp = head;
	node_count = 0;
	while (tmp)
	{
		if (head == NULL)
			exit(98);

		printf("[%p] %d\n", (void *)tmp, tmp->n);
		tmp = tmp->next;
		node_count++;

		new_tmp = head;
		new_count = 0;
		while (new_count < node_count)
		{
			if (tmp == new_tmp)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (node_count);
			}
			new_tmp = new_tmp->next;
			new_count++;
		}
	}

	return (node_count);
}
