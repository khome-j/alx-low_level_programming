#include "dog.h"
#include <string.h>

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
	char *ptr, *ptr1; /* store a copy of name and owner */
	int i;
	dog_t *dog;

	dog = malloc(sizeof(*dog));
	if (dog == NULL)
		return (NULL);

	(*dog).age = age;
	ptr = malloc(sizeof(char) * strlen(name));
	if ((ptr) == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (*(name + i) != '\0')
		{
			ptr[i] = name[i];
			i++;
		}
		(*dog).name = ptr;
	}

	ptr1 = malloc(sizeof(char) * strlen(owner));
	if (ptr1 == NULL)
		return (NULL);
	
	else
	{
		i = 0;
		while (*(owner + i) != '\0')
		{
			ptr1[i] = owner[i];
			i++;
		}
		(*dog).owner = ptr1;
	}
	return (dog);
}
