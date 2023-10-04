#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers
 *
 * @width: width to input
 *
 * @height: height to input
 *
 * Return: pointer to 2 dim of array
 */

int **alloc_grid(int width, int height)
{
	int **ray;
	int i, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	ray = malloc(sizeof(int *) * height);

	if (ray == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ray[i] = malloc(sizeof(int) * width);

		if (ray[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ray[i]);

			free(ray);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (y = 0; y < width; y++)
			ray[i][y] = 0;
	}

	return (ray);
}
