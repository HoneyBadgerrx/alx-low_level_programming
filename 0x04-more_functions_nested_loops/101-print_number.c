#include "main.h"

/**
 * print_number - prints int with _putchar
 *
 * @n: any int
 * Return: nil
 */
void print_number(int n)
{
	long int b = n;

	if (b < 0)
	{
		b = b * -1;
		_putchar('-');
	}

	if (b / 10)
		print_number(b / 10);
	_putchar('0' + (b % 10));
}
