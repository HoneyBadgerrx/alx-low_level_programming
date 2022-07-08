#include "main.h"
#include <limits.h>

/**
 * print_number - prints int with _putchar
 *
 * @n: any int
 * Return: nil
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = n * -1;
		if (n != INT_MIN)
			_putchar('-');
	}

	if (n / 10)
		print_number(n / 10);
	_putchar('0' + (n % 10));
}
