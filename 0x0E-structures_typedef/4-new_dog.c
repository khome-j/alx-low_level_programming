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
	char *ptr, *ptr1; /* store a copy of name and owner */
	int i, len, len1;
	dog_t *dog;

	len = str_len(name);
	len1 = str_len(owner);

	dog = malloc(sizeof(*dog));
	if (dog == NULL)
		return (NULL);

	(*dog).age = age;
	ptr = malloc(sizeof(char) * len);
	if ((ptr) == NULL)
		return (NULL);
	i = 0;
	while (*(name + i) != '\0')
	{
		ptr[i] = name[i];
		i++;
	}
	(*dog).name = ptr;
}

	ptr1 = malloc(sizeof(char) * len1);
	if (ptr1 == NULL)
		return (NULL);

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
