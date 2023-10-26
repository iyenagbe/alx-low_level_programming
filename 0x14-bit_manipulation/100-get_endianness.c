#include "main.h"

/**
 * get_endianness -  a function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i;
	char *d;

	i = 1;
	d = (char *) &i;

	return ((int)*d);
}
