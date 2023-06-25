#include "dog.h"
#include <string.h>

int str_len(char *s);

/**
 * new_dog - a function that creates a new dog
 * @name: the name of the dog, a pointer to char
 * @age: age of the dog, an integer
 * @owner: the owner of the dog
 *
 * Return: a pointer to a struct dog or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len, len1;
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	len = str_len(name) + 1;
	len1 = str_len(owner) + 1;

	dog = malloc(sizeof(*dog));
	if (dog == NULL)
		return (NULL);

	(*dog).age = age;
	(*dog).name = malloc(sizeof(char) * len);
	if ((*dog).name == NULL)
		return (NULL);
	i = 0;
	while (*(name + i) != '\0')
	{
		(*dog).name[i] = name[i];
		i++;
	}

	(*dog).owner = malloc(sizeof(char) * len1);
	if ((*dog).owner == NULL)
		return (NULL);

	i = 0;
	while (*(owner + i) != '\0')
	{
		(*dog).owner[i] = owner[i];
		i++;
	}
	return (dog);
}


/**
 * str_len - a function that counts the length of  a string
 * @s: the string
 *
 * Return: the length of a string
 */

int str_len(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;

	return (i);
}
