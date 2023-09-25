#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s:  locates the first occurrence in the string
 * @accept: any of the bytes in the string
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
		int ray;

		while (*s)
		{
			for (ray = 0; accept[ray]; ray++)
			{
			if (*s == accept[ray])
			return (s);
			}
		ray++;
		}

	return ('\0');
}
