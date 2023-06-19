#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int size, i, j, count;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			size++;
			j++;
		}
		size++;
	}

	ptr = malloc(sizeof(char) * (size + 1));

	if (ptr == NULL)
		return (NULL);

	count = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[count] = av[i][j];
			count++;
		}
		ptr[count] = '\n';
		count++;
	}
	ptr[count] = '\0';

	return (ptr);
}
