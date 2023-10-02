#include "main.h"
/**
 * _strlen - the length of a string to be returned
 *
 * @s: string lenghth
 *
 * Return: length
 */

int _strlen(char *s)
{
	int strlen = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}

	return (strlen);
}
