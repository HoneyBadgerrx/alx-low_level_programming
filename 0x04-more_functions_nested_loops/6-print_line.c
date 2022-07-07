#include <stdio.h>

/**
 * print_line - prints lines
 *
 * @n: any numeral
 * Return: 0
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			++a;
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
