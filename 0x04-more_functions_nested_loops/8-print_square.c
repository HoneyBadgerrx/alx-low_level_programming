#include "main.h"

/**
 * print_square - prints squares
 *
 * @size: any numeral
 * Return: nil
 */
void print_square(int size)
{
	int a = 1;

	if (size > 0)
	{
		while (size > 0)
		{
			a = 1;

			while (a <= size)
			{
				_putchar('#');
				++a;
			}
			_putchar('\n');
			--size;
		}

	}
	else
		_putchar('\n');
}
