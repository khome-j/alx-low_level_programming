#include "main.h"

/**
 * Swap: A function that swaps the two values of integers.
 * 
 * @a: parameter one
 * @b: parameter two
 * /

void swap_int(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = b;
    *b = tmp;
}