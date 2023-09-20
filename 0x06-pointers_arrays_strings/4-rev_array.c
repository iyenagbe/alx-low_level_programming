#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: function 1
 * @n: function 2
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b;
	int j;

	for (b = 0; b < n / 2; b++)
	{
	j = a[b];

	a[b] = a[n - 1 - b];
	a[n - 1 - b] = j;
	}

}
