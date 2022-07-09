#include "main.h"
/**
  * times_table - times table
  *
  * Return: void
  **/

/*times table*/
void times_table(void)
{
	int a = 0;
	int i = 0;
	int n = 9;
	int mul;

	while (i <= n)
	{
		a = 0;

		while (a <= n)
		{
			mul = i * a;

			if ((mul > 9) && (mul < 100))
			{
				_putchar('0' + ((mul / 10) % 10));
				_putchar('0' + (mul % 10));
			}
			else if ((mul > 99) && (mul < 1000))
			{
				_putchar('0' + ((mul / 100) % 10));
				_putchar('0' + ((mul / 10) % 10));
				_putchar('0' + (mul % 10));
			}
			else
				_putchar('0' + mul);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			++a;
		}
		_putchar('\n');
		++i;
	}
}
