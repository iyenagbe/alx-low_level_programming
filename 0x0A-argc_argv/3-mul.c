
#include <stdio.h>
#include "main.h"

/**
 * _atoi - a function that converts a string to an integer
 *
 * @s: function string to be converted
 *
 * Return: int converted from the string
 */

int _atoi(char *s)
{
	int a, d, n, len, f, digit;

	a = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && f == 0)
	{
		if (s[a] == '-')
			++d;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - a function that  multiplies two numbers
 *
 * @argc: number of an arguments
 *
 * @argv: array of an arguments
 *
 * Return: 0 or 1 (Error)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
