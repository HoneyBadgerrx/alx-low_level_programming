#include "main.h"
/**
 * puts_array - prints n number of array
 *
 * @n: integer
 * @a: any string
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n)
	{
		putchar(a[i]);
		++i;
	}
	putchar('\n');
}
