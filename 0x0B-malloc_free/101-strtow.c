#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 * strncat_mod - concatenates the string with n bytes from another string
 *
 * @dest: destination of a string
 *
 * @src: source of a string
 *
 * @i: index begins with char from a source string to copy
 *
 * @str_len: string of the length
 *
 * Return: next index to be check of a source string
 */

int strncat_mod(char *dest, char *src, int i, int str_len)

{
	int j;

	for (j = 0; src[i] != ' ' && i < str_len; i++, j++)
	dest[j] = src[i];
	return (i);
}

/**
 * mallocmem - the allocates memory for the output of
 * array and sets NULL at string end
 *
 * @newstr: the new string
 *
 * @str: the input of a string
 *
 * @str_len: the string length
 *
 * Return: void
 */

void mallocmem(char **newstr, char *str, int str_len)
{
	int i = 0, j = 0, word_len = 1;

	while (i < str_len)
{
	if (str[i] != ' ')
{
	while (str[i] != ' ' && i < str_len)
	i++, word_len++;
	newstr[j] = malloc(sizeof(char) * word_len);
	newstr[j][word_len] = '\0';
	j++, word_len = 1;
}
	i++;
}
}

/**
 * word_count - counts the words in an input string
 *
 * @str: input of a string
 *
 * @str_len: string of a length
 *
 * Return: 0 on failure, words on success
 */

int word_count(char *str, int str_len)
{
	int i = 0, words = 0;

	while (i < str_len)
{
	if (str[i] != ' ')
{
	while (str[i] != ' ' && i < str_len)
	i++;
	words++;
}
	i++;
}
	if (words == 0)
	return (0);
	return (words);
}

/**
 * strtow - splits the string into words
 *
 * @str: the input string to split
 *
 * Return: pointer to the new string
 */

char **strtow(char *str)
{
	char **newstr;
	int i = 0, j = 0, str_len = 0, words;

	if (str == NULL || str[0] == '\0')
	return (NULL);
	while (*(str + str_len) != '\0')
		str_len++;

	words = word_count(str, str_len);
	if (!words)
	return (NULL);

	newstr = malloc((words + 1) * sizeof(char *));
	mallocmem(newstr, str, str_len);
	while (i < str_len)
{
	if (str[i] != ' ')
{
	i = strncat_mod(newstr[j], str, i, str_len);
	j++, i--;
}
	i++;
}
	newstr[words + 1] = NULL;
	return (newstr);
}
