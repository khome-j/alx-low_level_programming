#ifndef FUNCTION_H
#define FUNCTION_H


#include <stdio.h>


void print_name(char *, void (*)(char *));
void array_iterator(int *array, size_t size, void(*action)(int));
int int_index(int *, int, int (*)(int));


#endif /* FUNCTION_H */
