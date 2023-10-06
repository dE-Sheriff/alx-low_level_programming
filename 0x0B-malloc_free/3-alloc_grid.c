#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns
 * a pointer to a 2 dimensional array of integers
 * @width: the 1st string
 * @height: the 2nd string
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **x;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	x = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		x[a] = malloc(sizeof(int) * width);

		if (x[a] == NULL)
		{
			for (; a >= 0; a--)
				free(x[a]);

			free(x);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			x[a][b] = 0;
	}

	return (x);
}
