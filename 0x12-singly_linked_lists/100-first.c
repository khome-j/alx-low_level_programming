#include <stdio.h> 

void print(void) __attribute__((constructor));
/**
 * print - a function that executes before the main function
 *
 */
void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house	upon my back!\n");
}
