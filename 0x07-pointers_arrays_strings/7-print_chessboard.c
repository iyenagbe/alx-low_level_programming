#include "main.h"

/**
 * print_chessboard - prints chessboard.
 * @a: pieces of pointer to be print
 * Return: 0 (success)
 */


void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)

	{
		for (j = 0; j < 8; j++)

		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
