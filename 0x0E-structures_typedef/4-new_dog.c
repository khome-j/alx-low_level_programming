#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - a function that creates a dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: a pointer or NULL if function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}

