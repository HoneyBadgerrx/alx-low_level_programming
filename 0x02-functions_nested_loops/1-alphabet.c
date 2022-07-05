#include <stdio.h>
/**
 * main - entry point
 * function_name - no_pq
 *
 * Description: prints abc, no pq
 * Return: 0
 */
void print_alphabet()
{

	int x = 'a';
	int y = 'z';

	while (x <= y)
	{
		if ((x != 'q') && (x != 'e'))
		{
			putchar(x);
		}
		++x;
	}
}
int main(void)
{
	putchar('\n');
	return (0);
}
