#include "main.h"
/**
  * print_last_digit - printa the last digit
  *
  * Description: print final digit
  * @c: any numeral
  * Return: int
  **/

/*print last digit*/
int print_last_digit(int c)
{
	long int b = c;

	if (b < 0)
		b = (b) * -1;
	b = b % 10;
	_putchar('0' + (b % 10));
	return (b % 10);
}
