
#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 *
 * @c: alpabet to check for
 *
 * Return: 1 for alphabetic character or 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}


