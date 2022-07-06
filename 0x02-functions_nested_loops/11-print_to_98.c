#include "main.h"
/**
 * print_to_98 - print to 98
 *
 * @n: any numeral
 * Return: int
 */
/*prints to or back 98*/
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n);
			if ((n = 98))
				break;
			_putchar(',');
			_putchar(' ');
			--n;
		}
	}
	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar(n);
			if ((n = 98))
				break;
			_putchar(',');
			_putchar(' ');
			++n;
		}
	}
	else
		_putchar(n);
}
