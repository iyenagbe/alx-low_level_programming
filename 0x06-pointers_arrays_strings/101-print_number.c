#include "main.h"

/**
 * print_number - main function
 *
 * @n: function parameter
 *
 * Return: 0 (updated)
 */

	void print_number(int n)

{
	unsigned int n2;

	n2 = n;

	if (n < 0)
	{
	putchar('-');
	n2 = -n;
	}

	if (n2 / 10 != 0)
	{
	print_number(n2 / 10);
	}
	putchar((n2 % 10) + '0');
}
