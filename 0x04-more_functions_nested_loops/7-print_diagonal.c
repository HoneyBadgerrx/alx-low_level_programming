#include "main.h"

/**
 * print_diagonal - prints diagonals
 *
 * @n: any numeral
 * Return: 0
 */
void print_diagonal(int n)
{
	int a = 1;
	int b = 1;

	if (n > 0)
	{
		while (a <= n)
		{
			b = 1;

			while (b <= (a - 1))
			{
				_putchar(' ');
				++b;
			}
			_putchar('\\');
			_putchar('\n');
			++a;
		}
	}
	else
		_putchar('\n');
}
