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
	int sizej = sizeof(a[0]) / sizeof(a[0][0]);

	for (i = 0; i < 8; ++i)
	{
		for (j = 0; j < sizej; ++j)
			putchar(a[i][j]);
		putchar('\n');
	}
}
