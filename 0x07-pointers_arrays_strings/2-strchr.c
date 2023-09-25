#include "main.h"
/**
 * _strchr - a functi0n that locates a character in a string
 * @c: located characters
 * @s:searched string
 * Return: if c ia found - a pointer to the first occurrence.
 * if c is not found - NULL.
 */


char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
