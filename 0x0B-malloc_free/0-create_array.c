#include "main.h"
#include <stdlib.h>

/**
 * create_array - create size of an array and assign char c
 *
 * @size: size of an array
 *
 * @c: char to be assign
 *
 * Description: create of an arry size and assign char c
 *
 * Return: pointer to the array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int r;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (r = 0; r < size; r++)
		str[r] = c;
	return (str);
}
