#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: seperates the numbers printed
 * @n:number of int to  print
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vv;

	if (separator == NULL || n <= 0)
		return;
	va_start(vv, n);
	for (i = 0; i < n; ++i)
	{
		printf("%d", va_arg(vv, int));
		if (i  != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vv);
}
