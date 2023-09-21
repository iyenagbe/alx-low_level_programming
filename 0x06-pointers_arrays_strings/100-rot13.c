#include "main.h"
#include <stdio.h>

/**
* rot13 - a function that encodes a string
* @s: encoded string
* Return: string
*/


	char *rot13(char *s)
{
	int a, i;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (i = 0; s1[i] != '\0'; i++)

			if (s[a] == s1[i])

			{
				s[a] = s2[a];

					break;
			}
	}
	return (s);
}
