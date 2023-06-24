#include "dog.h"

int str_len(char *name);
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: a struct dog data type
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;
	char *ptr1, *ptr2;
	int strlen1 = 0, strlen2 = 0, count;

	strlen1 = str_len(name);
	strlen2 = str_len(owner);

	ptr = malloc(sizeof(struct dog));
	if (ptr == NULL)
	{
		free(ptr);
		exit(1);


	ptr = d;
	(*ptr).age = age;

	ptr1 = malloc(sizeof(char *) * strlen1);
	if (ptr1 == NULL)
	{
		free(ptr1)
		exit(1);
	}

	count = 0;
	while (name[count] != '\0')
	{
		ptr1[count] = name[count];
		count++;
	}
	ptr1[count] = '\0';
	(*ptr).name = ptr1;

	ptr2 = malloc(sizeof(char *) * strlen2);
	if (ptr2 == NULL)
	{
		free(ptr2);
		exit(1);
	}

	count = 0;
	while (owner[count] != '\0')
	{
		ptr2[count] = owner[count];
		count++;
	}
	ptr2[count] = '\0';
	(*ptr).owner = ptr2;
}



/**
 * str_len - a program that calculates the lenght of the str
 * @name: a string
 *
 * Return: the lenght of a string on success
 */

int str_len(char *name)
{
	int count;

	count = 0;

	while (name[count] != '\0')
	{
		count++;
	}

	return (count);
}
