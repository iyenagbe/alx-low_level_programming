#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the sum of all its param.
 * @n: number of param passed to the function.
 * @...: A variable number of param to calculate the sum
 *
 * Return: If n == 0 - 0.
 * Or - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ay;
	unsigned int j, sum = 0;

	va_start(ay, n);

	for (j = 0; j < n; j++)
		sum += va_arg(ay, int);

	va_end(ay);

	return (sum);
}
