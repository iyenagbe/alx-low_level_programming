#include "main.h"
#include <stdio.h>

/**
 * print_array - the function name
 * @a: arrays to used
 * @n: elecments number to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)

	{
	printf("%d", a[i]);

	if (i < n - 1)
		printf(", ");
	}

	printf("\n");
}
