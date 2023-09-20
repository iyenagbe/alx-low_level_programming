#include "main.h"


/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase
 * @n: input string
 * Return: dest
 */

char *string_toupper(char *n)
{
	int c;

	c = 0;
	while (n[c] != '\0')
	{
	if (n[c] >= 'a' && n[c] <= 'z')
	n[c] = n[c] - 32;
	c++;
	}

	return (n);
}
