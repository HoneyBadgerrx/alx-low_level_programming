#include "main.h"
/**
  * times_table - times table
  *
  * Return: void
  **/

/*times table*/
void times_table(void)
{
	int i = 0;
	int n = 9;
	int mul;

	while (i <= n)
	{
		int a = 0;

		while (a <= n)
		{
			mul = i * a;

			if ((mul > 9) && (mul < 100))
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + ((mul / 10) % 10));
				_putchar('0' + (mul % 10));
			}
			else if ((mul > 99) && (mul < 1000))
			{
				_putchar('0' + ((mul / 100) % 10));
				_putchar('0' + ((mul / 10) % 10));
				_putchar('0' + (mul % 10));
			}
			else if ((mul < 10) && (mul >= 0))
			{
				if (a != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + mul);
			}
			++a;
		}
		_putchar('\n');
		++i;
	}
}
