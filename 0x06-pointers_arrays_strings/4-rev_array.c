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
	int copy[] = *a;

	for (i = 0; i < n; i++)
	{
		a[i] = copy[n - 1 - i];
	}
}
