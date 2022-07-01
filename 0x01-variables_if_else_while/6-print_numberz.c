#include <stdio.h>
/**
 * main - entry point
 * function_name - putchar_num
 *
 * Description: print char of num
 * Return: 0
 */
int main(void)
{
	int x = '0';
	int y = '9';

	while (x <= y)
	{
		putchar(x);
		++x;
	}
	putchar('\n');
	return (0);
}
