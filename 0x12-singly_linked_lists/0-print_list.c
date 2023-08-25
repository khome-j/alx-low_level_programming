#include "lists.h"




/**
 * _strlen - a function that counts the lenght of a string
 * @s: a string to be counted
 *
 * Return: the lenght of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}



/**
 * print_list - prints all the elements of a list_t list
 * @h: a pointer to data type struct list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", _strlen(h->str), h->str);
		h = h->next;
		count++;
	}
	return (count);
}






