#include <stdlib.h>
#include "main.h"

/**
 * count_word - a function that splits a string into words
 *
 * @s: string to be evaluate
 *
 * Return: words numbers to return
 */

int count_word(char *s)
{
	int flag, c, r

	flag = 0;
	r = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			r++;
		}
	}

	return (r);
}

/**
 * **strtow - splits the string into words
 *
 * @str: string to be split
 *
 * Return: pointer to the array of a strings (updated)
 *
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int a, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}

	matrix[k] = NULL;

	return (matrix);
}
