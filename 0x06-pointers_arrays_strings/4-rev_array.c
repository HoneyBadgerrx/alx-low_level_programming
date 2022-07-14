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
	int v;

	for (i = 0; i <= n / 2; i++)
	{
		v = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = v;
	}
}
