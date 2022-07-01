#include <stdio.h>
/**
 * main - entry point
 * function_name - print_zyx
 *
 * Description: prints rev alphabets
 * Return: 0
 */
int main(void)
{
	int x = 'a';
	int y = 'z';

	while (y >= x)
	{
		putchar(y);
		--y;
	}
	putchar('\n');
	return (0);
}
