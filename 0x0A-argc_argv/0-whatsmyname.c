#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints names
 *
 * @argc: number of an arguments
 *
 * @argv: array of an arguments
 *
 * Return: 0 (updated)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
