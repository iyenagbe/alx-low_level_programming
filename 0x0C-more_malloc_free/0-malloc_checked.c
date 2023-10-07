#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - the allocated memory using malloc
 *
 * @b: the number or bytes to be allocated
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
