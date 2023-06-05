#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array integers
 * @a: pointer to an integer
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int count, len, tmp;

	len = n - 1; /*counting from 0 - 12 = 13*/
	count = 0;

	while (count < len)
	{
		tmp = *(a + count);/*hold the first value of array a*/
		*(a + count) = *(a + len);/*first elmt is assigned last*/
		*(a + len) = tmp;/*last element is assigned  first*/
		count++;
		len--;
	}
}
