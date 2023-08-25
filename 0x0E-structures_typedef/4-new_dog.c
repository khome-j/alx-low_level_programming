#include "dog.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - a function that creates a new dog
 * @name: name of the dog(a string)
 * @age: age of the dog(a float)
 * @owner: owner of the dog
 *
 * Return: NULL if the function fails, or the newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (!name || age < 0 || !owner)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	(*newdog).name = malloc(sizeof(char) * _strlen(name) + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = _strcpy(newdog->name, name);
	(*newdog).owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->owner = _strcpy(newdog->owner, owner);
	newdog->age = age;

	return (newdog);
}

/**
 * _strlen - a function that returns the length of a string
 * @s: string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int count = 1;

	if (*s == '\0')
		return (0);
	return (count + _strlen(++s));
}


/**
 * _strcpy - a function that copies a string
 * @dest: a char string that data is copied into from the src
 * @src: a char string whose data is copied to dest
 *
 * Return: a pointer to the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

