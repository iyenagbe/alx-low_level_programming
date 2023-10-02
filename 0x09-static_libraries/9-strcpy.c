#include "main.h"

/**
 * char *_strcpy - copy the string pointed to by src
 *
 * @dest: copy string
 *
 * @src: copy from src
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int j = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; j < a ; a++)
	{
		dest[j] = src[j];
	}
	dest[a] = '\0';

	return (dest);
}
