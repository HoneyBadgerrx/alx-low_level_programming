#include "main.h"

/**
 * print_chessboard - prints a chess board
 *
 * @a: array of 8x8
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i ; ++i)
	{
		for (j = 0; j ; ++j)
			putchar(a[i][j]);
		putchar('\n');
	}
}
