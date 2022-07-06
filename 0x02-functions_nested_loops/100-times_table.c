#include "main.h"
/**
  * times_table - times table
  *
  * Return: void
  **/

/*times table*/
void print_times_table(int n)
{
	int a = 0;
	int i = 0;

	while (i < 10)
	{
		_putchar(a);
		a += i;
		if ((i < 10))
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
		++i;
	}
}
