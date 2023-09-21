#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: int to be printed
 * Return: 0 (updated)
 */


	void print_number(int n)
{

	unsigned int a = j;

	if (n < 0)
	{
		_putchar(45);
		a = -a;
	}

	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar(a % 10 + '0');
}
