#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory
 *
 * @str: char
 *
 * Return: 0 (updated)
 */

char *_strdup(char *str)
{
	char *ray;
	int i, r = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')

	{
		i++;
	}

	ray = malloc(sizeof(char) * (i + 1));

	if (ray == NULL)
	{
		return (NULL);
	}

	for (r = 0; str[r]; r++)
	{
		ray[r] = str[r];
	}

	return (ray);
}
