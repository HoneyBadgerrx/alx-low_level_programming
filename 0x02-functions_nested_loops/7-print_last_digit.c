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
	if (c < 0)
		c = c * -1;
	c = c % 10;
	_putchar('c');
	return (c);
}
