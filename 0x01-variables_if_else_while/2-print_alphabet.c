#include <stdio.h>

/**
 * main - Prints some letters of alphabet
 *
 * Return: 0 (updated)
 */
int main(void)
{
	int lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase += 1;
	}
	putchar('\n');
	return (0);
}
