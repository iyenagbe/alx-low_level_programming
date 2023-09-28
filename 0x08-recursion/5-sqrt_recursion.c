#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 *
 * @n: calculated numbr of the square root
 *
 * Return: square root number
 */

	int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - the recursion to find natural square
 * square root of number
 *
 * @n: alculated number of the sqaure root
 *
 * @i: iterator
 *
 * Return: the resulting square root
 */

	int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
