#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a iterate to an array
 * @array: number of array
 * @size: element to be print
 * @action: regular pointer to be print
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
