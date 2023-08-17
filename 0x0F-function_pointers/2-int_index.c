#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: an array of integers
 * @size: size of the array
 * @cmp: a function used to compare the elements of an array
 *
 * Return: the first index of the first element for which the cmp func does
 * not return 0 or -1 if no elements matches or -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) == 1)
			return (i);
		i++;
	}
	return (-1);
}
