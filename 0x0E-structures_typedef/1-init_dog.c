#include "dog.h"


/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: a pointer to the data type struct dog
 * @name: a character string
 * @age: the age of the dog(float)
 * @owner: the owner of the dog(string character)
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != (void *)0)
	{
		new = d;
		(*new).name = name;
		(*new).age = age;
		(*new).owner = owner;
	}
}
