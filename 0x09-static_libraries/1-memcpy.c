#include "main.h"

/**
 * _memcpy - the function that copied memory
 *
 * @dest: stored memory
 *
 * @src: copied memory
 *
 * @n: bytes numbers
 *
 * Return: changed memory copied with byte
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}

	return (dest);
}
