#include "main.h"

/**
 * reverse_array - reverses an array
 *
 * @n: number of elements to print
 * @a: string to be rev
 * Return: nil
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[n - 1 - i]);
		if (i != (n - 1))
		{
			putchar(',');
			putchar(' ');
		}
	}
}
