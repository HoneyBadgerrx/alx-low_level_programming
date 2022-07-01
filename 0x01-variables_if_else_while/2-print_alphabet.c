#include <stdio.h>
/**
 * main - entry point
 * function_name - print_abc
 *
 * Description: prints alphabets
 * Return: 0
 */
int main(void)
{
	int x = 'a';
	int y = 'z';

	while (x <= y)
	{
		putchar(x);
		++x;
	}
	putchar('\n');
	return (0);
}
