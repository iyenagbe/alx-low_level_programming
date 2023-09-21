#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @s: encodes a string using rot13
 * Return: string function
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
