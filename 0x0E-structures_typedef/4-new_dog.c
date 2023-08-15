#include "dog.h"

int _strlen(char *);

/**
 * new_dog - a function that creates a new dog
 * @name: name of dog(strings)
 * @age: age of dog(float)
 * @owner: owner of dog(strings)
 *
 * Return: a pointer to the new dog type or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int i;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	if (name != NULL)
	{
		new->name = malloc(sizeof(char) * _strlen(name) + 1);
		if (new->name == NULL)
		{
			free(new);
			return (NULL);
		}
		i = 0;
		while (name[i])
		{
			new->name[i] = name[i];
			i++;
		}
		new->name[i] = '\0';
	}
	else
		return (NULL);
	if (new->age >= 0)
		new->age = age;
	else
		return (NULL);

	if (owner)
	{
		new->owner = malloc(sizeof(char) * _strlen(owner) + 1);
		if (new->owner == NULL)
		{
			free(new->name);
			free(new->owner);
			free(new);
			return (NULL);
		}
		i = 0;
		while (owner[i])
		{
			new->owner[i] = owner[i];
			i++;
		}
		new->owner[i] = '\0';
	}
	return (new);
}



/**
 * _strlen - a function that calculates the length of a string
 * @s: the string
 *
 * Return: the length of the string on success
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(++s));
}
