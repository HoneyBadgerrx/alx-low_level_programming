#include "variadic_function.h"
/**
 * print-c - prints char
 * @c: char
 * Return: void
 */
void print-c(char c)
{
	printf("%c", c);
}
/**
 * print-i - prints int
 * @i: integer
 * Return: void
 */
void print-i(int i)
{
	printf("%i", i);
}
/**
 * print-f - prints float
 * @f: float
 * Return: void
 */
void print-f(float f)
{
	printf("%f", f);
}
/**
 * print-s - prints string
 * @s: string
 * Return: void
 */
void print-s(char *s)
{
	printf("%s", s);
}
/**
 * print_all - prints anything
 * @format: format of arguments
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int index = 0, k = 0, int i = 0;
	float f;
	char c, *s;
	va_list vv;

	va_start(vv, format);
	while (format)
	{
		if (format[k] == 'c' || format[k] == 'i' || format[k] == 's' | format[k] == 'f')
		{

