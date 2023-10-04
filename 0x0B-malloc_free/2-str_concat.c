#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: input one to the concatenate
 *
 * @s2: input two to the concatenate
 *
 * Return: concatenate of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int a, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = ci = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (a + ci + 1));

	if (conct == NULL)
		return (NULL);
	a = ci = 0;
	while (s1[a] != '\0')
	{
		conct[a] = s1[a];
		a++;
	}

	while (s2[ci] != '\0')
	{
		conct[a] = s2[ci];
		a++, ci++;
	}
	conct[a] = '\0';

	return (conct);
}
