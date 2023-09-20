#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: string destination
 * @src: string source
 * @n: bytes numbers
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[b] = src[b];

	while (b < n)
	{
	dest[b] = '\0';
		b++;
	}
	return (dest);
}
