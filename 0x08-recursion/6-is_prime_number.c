#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 *
 * @n: evaluateed number
 *
 * Return: 1 if n is not prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculated number of prime recursive
 *
 * @n: evaluateed number
 *
 * @i: iterator
 *
 * Return: 1 if n is not prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
