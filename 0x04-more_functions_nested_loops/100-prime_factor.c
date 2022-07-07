#include <stdio.h>

/**
 * main - entry
 *
 * Description: Find largest prime number
 * Return: int
 */
int main(void)
{
	long int i = 612852475143;
	long int d = 2;

	while (i != 1)
	{
		d = 2;

		while ((i % d) != 0)
			++d;
		i = i / d;
	}
	printf("%ld", d);
	putchar('\n');
	return (0);
}
