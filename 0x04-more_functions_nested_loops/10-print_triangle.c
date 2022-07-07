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
			c = b - 1;

			while (a <= size)
			{

				while (c > 0)
				{
					putchar(' ');
					--c;
					++a;
				}
				putchar('#');
				++a;
			}
			putchar('\n');
			--b;
		}

	}
	else
		putchar('\n');
}
void main(void)
{
	print_triangle(10);
}
