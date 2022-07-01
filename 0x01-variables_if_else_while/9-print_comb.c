#include <stdio.h>
/**
 * main - entry point
 * function_name - putchar_arn
 *
 * Description: print arr num
 * Return: 0
 */
int main(void)
{
	int x = '0';
	int y = '9';

	while (x <= y)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
		++x;
	}
	putchar('\n');
	return (0);
}
