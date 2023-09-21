#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @str: encodes a string using rot13
 * Return: str
 */


	char *rot13(char *str)
{
	int a, i;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (i = 0; s1[i] != '\0'; i++)

			if (str[a] == s1[i])

			{
				str[a] = s2[a];

					break;
			}
	}
	return (str);
}
