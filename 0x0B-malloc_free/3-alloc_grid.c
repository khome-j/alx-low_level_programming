#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array of
 * integers.
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to a 2 dimensional array(on Success)
 *         NULL (on failure)
 */

int **alloc_grid(int width, int height)
{
	int **t, h, w;

	t = malloc(sizeof(int) * height);

	if (t == NULL)
		return (NULL);

	if (height <= 0 || width <= 0)
		return (NULL);

	h = 0;
	while (h < height)
	{
		t[h] = malloc(sizeof(int) * width);
		if (t[h] == NULL)
		{
			while (h >= 0)
			{
				free(t[h]);
				h--;
			}
		}
		w = 0;
		while (w < width)
		{
			t[h][w] = 0;
			w++;
		}
		h++;
	}
	return (t);
}
