#include "main.h"

/**
 * clear_bit - a function that sets the value of a
 * bit to 0 at a given index
 * @n: pointer to an unsigned long int
 * @index: index of bit
 * Return: 1 if it worked, -1 if it didn't
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int r;

	if (index > 63)
		return (-1);

	r = 1 << index;

	if (*n & r)
		*n ^= r;

	return (1);
}
