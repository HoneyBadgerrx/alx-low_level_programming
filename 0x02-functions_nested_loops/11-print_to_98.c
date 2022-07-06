#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print to 98
 *
 * @n: any numeral
 * Return: int
 */
/*prints to or back 98*/
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if ((n = 98))
			{
				break;
			}
			putchar(',');
			putchar(' ');
			--n;
		}
	}
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if ((n = 98))
			{
				break;
			}
			putchar(',');
			putchar(' ');
			++n;
		}
	}
	else
		printf("%d", n);
	putchar('\n');
}
