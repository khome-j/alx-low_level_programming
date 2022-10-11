#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable type struct dog
 * @d: input pointer to the struct dog
 * @name: input for dog name
 * @age: input for dog age
 * @owner: input for dog owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));
	if (ptr == NULL)
		return (NULL);
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	return (d);
}

