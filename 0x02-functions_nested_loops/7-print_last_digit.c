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
	int ans;

	if (c < 0)
		c = c * -1;
	c = c % 10;

	ans = c + (c * 10);
	return (ans);
}
