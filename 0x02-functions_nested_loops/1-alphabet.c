#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Entry point
 *
 * Return:0 (updated)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
