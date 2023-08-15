#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * struct dog - a structure data type for a dog
 * @name: name of dog which is a string
 * @age: age of the dog is a float
 * @owner: owner of the dog in string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
typedef struct dog dog_t;

#endif /*DOG_H*/
