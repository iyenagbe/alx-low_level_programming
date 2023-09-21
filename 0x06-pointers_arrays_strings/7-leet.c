#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @str: encodes a string
 * Return: encoded string
 */


	char *leet(char *str)
{
	int a, i;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (i = 0; s1[i] != '\0'; i++)

			if (str[a] == s1[i])
			{
				str[a] = s2[i];
			}

	}
	return (str);
}
