#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills the memory with a constant of a byte
 *
 * @s: filled memory area
 *
 * @b: copied characters
 *
 * @n: number of times b to be copied
 *
 * Return: the memory area s to the pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}

	return (s);
}

/**
 * *_calloc - memory for an array allocation
 *
 * @nmemb: the elements number in an array
 *
 * @size: size of each element the array
 *
 * Return: the allocated memory to pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
