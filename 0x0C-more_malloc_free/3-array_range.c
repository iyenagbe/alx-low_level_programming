#include <stdlib.h>
#include "main.h"

/**
 * *array_range - array of integers to be created
 *
 * @min: the min range of values stored
 *
 * @max:the  max range of values to be stored and
 * number of the elements
 *
 * Return: new array of a pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int y, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (y = 0; min <= max; y++)
		ptr[y] = min++;

	return (ptr);
}
