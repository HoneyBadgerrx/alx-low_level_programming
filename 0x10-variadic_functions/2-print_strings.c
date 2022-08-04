#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separator of the strings
 * @n: number of strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vv;
	char *p;

	va_start(vv, n);
	for (i = 0; i < n; ++i)
	{
		p = va_arg(vv, char *);
		if (p)
			printf("%s", p);
		else
			printf("(nil)");
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vv);
}
