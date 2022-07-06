#include "main.h"
/**
  * print_last_digit - printa the last digit
  *
  * Description: print final digit
  * @c: any numeral
  * Return: int
  **/

/*print abs*/
int print_last_digit(int c)
{
	char ans[];

	if (c < 0)
		c = c * -1;
	c = c % 10;
	ans[] = "%d%d", c ,c;
	return (c);
}
