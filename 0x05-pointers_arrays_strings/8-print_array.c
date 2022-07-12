#include "main.h"
/**
 * print_array - prints n number of array
 *
 * @n: integer
 * @a: any string
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i <= (n - 1))
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
}
