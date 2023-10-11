#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index -  a function that searches for an integer.
 * @array: number of array
 * @size: element of an array
 * @cmp: pointer to function
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
