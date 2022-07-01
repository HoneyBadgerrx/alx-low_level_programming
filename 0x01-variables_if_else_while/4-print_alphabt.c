#include <stdio.h>
/**
 * main - entry point
 * function_name - no_pq
 *
 * Description: prints abc, no pq
 * Return: 0
 */
int main(void)
{
	int x = 'a';
	int y = 'z';

	while (x <= y)
	{
		if ((x != 'q') | (x != 'e'))
		{
			putchar(x);
			++x;
		}
	}
	putchar('\n');
	return (0);
}
