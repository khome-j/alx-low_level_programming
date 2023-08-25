#include "dog.h"

/**
 * free_dog - a function that frees dogs
 * @d: a pointer to the dog struct data type
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
