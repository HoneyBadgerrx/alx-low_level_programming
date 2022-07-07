#include "main.h"

/**
 * print_triangle - prints triangles
 *
 * @size: any numeral
 * Return: nil
 */
void print_triangle(int size)
{
	int a = 1;
	int b = size;
	int c;

	if (size > 0)
	{
		while (b > 0)
		{
			a = 1;

			while (a <= size)
			{
				c = size - a;

				while (c > 0)
				{
					_putchar(' ');
					--c;
					++a;
				}
				_putchar('#');
				++a;
			}
			_putchar('\n');
			--b;
		}

	}
	else
		_putchar('\n');
}
