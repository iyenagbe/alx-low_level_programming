#include "main.h"

/**
 * _strstr - Entry point of a function
 *
 * @haystack: input function
 *
 * @needle: input function
 *
 * Return: 0 (updated)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *i = needle;

		while (*a == *i && *i != '\0')
		{
			a++;
			i++;
		}

		if (*i == '\0')
			return (haystack);
	}

	return (0);
}
