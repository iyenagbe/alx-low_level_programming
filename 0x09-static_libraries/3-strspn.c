#include "main.h"

/**
 * _strspn - Entry point of a function
 *
 * @s: input function
 *
 * @accept: input function
 *
 * Return: 0 (updated)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
