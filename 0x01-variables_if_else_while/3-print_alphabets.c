#include <stdio.h>
/**
 * main -  a program that prints the alphabet in lowercase
 *
 * Return: 0 (updated)
 */

int main(void)

{
	int lowerCase = 'a';
	int upperCase = 'A';

	while (upperCase <= 'z')
	{
	putchar(lowerCase);
	lowerCase += 1;
	}
	while (upperCase <= 'z')
	{
	putchar(upperCase);
	upperCase += 1;
	}
	putchar('\n');
	return (0);
}
