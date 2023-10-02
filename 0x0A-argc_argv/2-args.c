#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints all arguments it's receives
 *
 * @argc: number of an arguments
 *
 * @argv: array of an arguments
 *
 * Return: 0 (updated)
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)

	{
		printf("%s\n", argv[j]);
	}

	return (0);
}
