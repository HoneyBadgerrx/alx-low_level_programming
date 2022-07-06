#include "main.h"
/**
  * print_sign - check for sign
  *
  * Description: check for sign
  * @n: any numeral
  * Return: int
  **/

/*print sign*/
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
