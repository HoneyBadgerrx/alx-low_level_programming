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
	int max_x = '8';
	int max_y = '9';

	while (x <= max_x)
	{
		y = x;
		++y;
		while (y <= max_y)
		{
			putchar(x);
			putchar(y);
			if (x != max_x)
			{
				putchar(',');
				putchar(' ');
			}
			++y;
		}
		++x;
	}
	putchar('\n');
	return (0);
}
