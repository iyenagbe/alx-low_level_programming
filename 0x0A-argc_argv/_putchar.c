#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes a character c to stdout
 *
 * @c: character to print
 *
 * Return: success 1.
 *
 * On error, -1 is returned and error is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
