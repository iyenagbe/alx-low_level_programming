#include "main.h"

/**
 * _strpbrk - Entry point of a function
 *
 * @s: input function
 *
 * @accept: input function
 *
 * Return: 0 (updated)
 */

char *_strpbrk(char *s, char *accept)
{
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
		if (*s == accept[r])

		return (s);
		}
	s++;
	}

	return ('\0');

}
