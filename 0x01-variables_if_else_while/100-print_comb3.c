#include <stdio.h>
/**
 * main - entry point
 * function_ name - print_lnum
 *
 * Description: print least possible comb of 2 num
 * Return: 0
 */
int main(void)
{
	int x = '0';
	int y;
	int final_no = '8';

	while (x <= final_no)
	{
		y = x;
		++y;
		while (y <= 9)
		{
			putchar(x);
			putchar(y);
			if (x != final_no)
			{
				putchar(',');
				putchar(' ');
				++y;
			}
		}
		++x;
	}
	putchar('\n');
	return (0);
}
