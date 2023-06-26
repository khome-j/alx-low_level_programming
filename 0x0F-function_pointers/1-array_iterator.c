#include "function_pointers.h"


/**
 * array_iterator - a function that executes a function given as a parameter on
 * each element of an array.
 * @array: an array of integer
 * @size: size of the array
 * @action: a pointer to a function
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && (size > 0) && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
