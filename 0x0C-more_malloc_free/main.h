#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


void *malloc_checked(unsigned int);
char *string_nconcat(char *, char *, unsigned int);
void *_calloc(unsigned int, unsigned int);
int *array_range(int, int);
void *_realloc(void *, unsigned int, unsigned int);

#endif /*MAIN_H*/


