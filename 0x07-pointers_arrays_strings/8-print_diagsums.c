#include "main.h"

/**
 * print_diagsums - prints diagonal sums
 *
 * @a: array
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i = 0;

	while (i < size)
	{
		sum1 += *a;
		a = a + size + 1;
		++i;
	}
	a = a - size - 1;
	a = a - size + 1;
	while (i > 0)
	{
		sum2 += *a;
		a = a - size + 1;
		--i;
	}
	printf("%d, %d\n", sum1, sum2);
}
