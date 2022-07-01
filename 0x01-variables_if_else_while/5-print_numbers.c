#include <stdio.h>
/**
 * main - entry point
 * function_name - numbr
 *
 * Description: print num
 * Return: 0
 */
int main(void)
{
	int x = 0;
	int y = 10;

	while (x < y)
	{
		printf("%d", x);
		++x;
	}
	putchar('\n');
	return (0);
}
