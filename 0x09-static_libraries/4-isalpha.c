#include "main.h"

/**
 * _isalpha - checks for alphabetic function of a character
 *
 * @c: character of function to be checked
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{

	return ((c >= 'i' && c <= 'z') || (c >= 'I' && c <= 'Z'));

}
