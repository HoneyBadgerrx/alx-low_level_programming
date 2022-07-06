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
