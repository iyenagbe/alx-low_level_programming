#include "main.h"

/**
 * _memset - Program fills a block of memor
 *
 * @s: memory address to be filled
 *
 * @b: a desired value
 *
 * @n: bytes number to be changed
 *
 * Return: array with a value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)

{
	int a = 0;

	for (a = 0; n > 0; a++)

	{
		s[a] = b;

		n--;
	}

	return (s);
}
