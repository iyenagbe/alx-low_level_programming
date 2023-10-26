#include "main.h"

/**
 * set_bit - a function that sets the value of a bit
 * to 1 at a given index
 * @n: pointer to an unsigned long int
 * @index: index of bit
 * Return: 1 if it worked, -1 if it didn't
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (index > 63)
		return (-1);

	b = 1 << index;
	*n = (*n | b);

	return (1);
}
