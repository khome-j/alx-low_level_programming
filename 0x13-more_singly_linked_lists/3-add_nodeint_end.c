#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at the end of a list.
 * @head: pointer of type listint
 * @n: an integer
 *
 * Return: the address of the new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *endNode;

	temp = *head;
	endNode = malloc(sizeof(listint_t *)); /*allocate a memory to the endNode*/
	endNode->n = n;
	endNode->next = NULL;
	if (endNode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = endNode;
		return (endNode);
	}
	else
	{
		while (temp->next != NULL) /*while temp is not equal to NULL*/
		{
			temp = temp->next; /*traversing the head pointer */
		}
		temp->next = endNode;
	}
	return (endNode);

}
