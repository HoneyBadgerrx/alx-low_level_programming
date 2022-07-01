#include <stdio.h>
/**
 * main - entry point
 * function_name - print_abc
 *
 * Description: print small and big abc
 * Return: 0
 */
int main(void)
{
	int x = 'a';
	int y = 'z';
	int a = 'A';
	int b = 'Z';

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
