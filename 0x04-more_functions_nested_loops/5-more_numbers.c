#include "main.h"

/**
 * more_numbers - print 1-14
 *
 * Return: void
 */

void more_numbers(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (c < 10)
	{
		a = 0;

		while (a < 2)
		{
			b = 0;

			while (b < 10)
			{
				if ((a >= 1) && (b >= 5))
				{
					break;
				}
				if (a == 1)
				{
					_putchar('0' + a);
				}
				_putchar('0' + b);
				++b;
			}
			++a;
		}
		_putchar('\n');
		++c;
	}
}
