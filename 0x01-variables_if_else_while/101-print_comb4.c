#include <stdio.h>
/**
 * main - entry point
 * function_ name - print_3dignum
 *
 * Description: print least possible comb of 3 num
 * Return: 0
 */
int main(void)
{
	int x = '0';
	int y;
	int z;
	int max_x = '7';
	int max_y = '8';
	int max_z = '9';

	while (x <= max_x)
	{
		y = x;
		++y;
		while (y <= max_y)
		{
			z = y;
			++z;
			while (z <= max_z)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x != max_x)
				{
					putchar(',');
					putchar(' ');
				}
				++z;
			}
			++y;
		}
		++x;
	}
	putchar('\n');
	return (0);
}
