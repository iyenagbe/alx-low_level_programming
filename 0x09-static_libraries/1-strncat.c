#include "main.h"

/**
 * _strncat - a function that concatenate the two string
 * use most n byte for src
 *
 * @dest: entered value
 *
 * @src: value to be entered
 *
 * @n: value to be entered
 *
 * Return: dest
 */

	char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
