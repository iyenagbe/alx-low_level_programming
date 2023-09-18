#include "main.h"

/**
 * _puts - function of string to be ptint
 * @str: the printed string
 * Return: void
 */

	void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)

		_putchar (str[i]);

	_putchar('\n');
}
