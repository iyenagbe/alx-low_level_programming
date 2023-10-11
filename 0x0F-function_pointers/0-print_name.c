#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name
 *
 * @f: the string to hold the variable name
 *
 * @name: name
 */

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;

	f(name);
}
