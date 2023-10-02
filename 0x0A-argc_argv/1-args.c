#include <stdio.h>
#include "main.h"

/**
 * main - a function tha print the number of an
 * arguments passed to the program
 *
 * @argc: number of an arguments
 *
 * @argv: array of an arguments
 *
 * Return: 0 (updated)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);

	return (0);
}
