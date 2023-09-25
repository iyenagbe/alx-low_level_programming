#include "main.h"

/**
 * _strspn -  a function that gets the length of a prefix substring
 * @s: searched string
 * @accept: prefix measured
 * Return: numbers of bytes in s, consist only from accept byte.
 */

unsigned int _strspn(char *s, char *accept)
	{
	unsigned int j = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				j++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (j);
		}
		s++;
	}
	return (j);
}
