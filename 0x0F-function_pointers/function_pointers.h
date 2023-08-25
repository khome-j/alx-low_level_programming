#ifndef FUNC_POINTER
#define FUNC_POINTER

#include <stdio.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *, size_t, void(*)(int));
int int_index(int *, int, int (*)(int));


#endif /*FUNC_POINTER*/
