#ifndef FILE_NAME
#define FILE_NAME

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - struct type for a dog
 * @name: a char pointer
 * @age: a float pointer
 * @owner: a char pointer
 *
 * Description: a struct type showing the name, age and
 * owner of the dog
 */
struct dog
{
	char *name;
	float *age;
	char *owner;
};

#endif
