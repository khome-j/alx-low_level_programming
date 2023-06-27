#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: an integer of array
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: the index of the first element, if no element matches
 * and size is <=0 return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index, seen, i;

	if (array && (size > 0) && cmp)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				index = i;
				seen = 1;
				break;
			}
			i++;
		}
	}
	if ((seen == 0) || (size <= 0))
		index = -1;
	return (index);
}
