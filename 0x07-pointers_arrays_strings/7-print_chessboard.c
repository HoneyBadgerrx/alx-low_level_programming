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
	int size = sizeof(a)/sizeof(a[0]);

	for (i = 0; i <= size; ++i)
	{
		for (j = 0; j < 8; ++j)
			putchar(a[i][j]);
		putchar(' ');
	}
}
