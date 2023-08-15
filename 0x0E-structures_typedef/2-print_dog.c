#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: a pointer to a struct data type
 *
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name == NULL || (*d).owner == NULL)
			printf("(nil)");
		else
		{
			printf("Name: %s\n", (*d).name);
			printf("Age: %f\n", (*d).age);
			printf("Owner: %s\n", (*d).owner);
		}
	}
}
