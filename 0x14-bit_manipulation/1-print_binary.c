#include "main.h"
/**
 * print_binary - prints binary form of int n
 * @n: number to be subtracted
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int j = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	while (n != 0 && n != 1)
	{
		n -= 2;
		++j;
	}
	print_binary(j);
	_putchar (48 + n);
}
