#include <stdio.h>
/**
 * main - entry point
 * function_name - base16
 *
 * Description: print base 16
 * Return: 0
 */
int main(void)
{
	int x = '0';
	int y = '9';
	int a = 'a';
	int b = 'f';

	while (x <= y)
	{
		putchar(x);
		++x;
	}
	while (a <= b)
	{
		putchar(a);
		++a;
	}
	putchar('\n');
	return (0);
}
