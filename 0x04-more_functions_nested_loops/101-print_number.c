#include "main.h"
#include <limits.h>

/**
 * print_number - prints int with putchar
 *
 * @n: any int
 * Return: nil
 */
void print_number(int n)
{
/*	if (n < 0)
	{
		while (n < 0)
			n = n * -1;
		putchar('-');
	}
*/
	if (n / 10)
		print_number(n / 10);
	putchar('0' + (n % 10));
}
void main(void)
{
	print_number(INT_MIN);
}
