#include "variadic_functions.h"
/**
 * sum_them_all - adds args
 * @n: number of elements
 * Return: sum of all args
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list vv;

	va_start(vv, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; ++i)
		sum += va_arg(vv, int);
	va_end(vv);
	return (sum);
}
