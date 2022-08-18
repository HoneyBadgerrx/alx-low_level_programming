#include "main.h"
/**
 * _strlen - gets string length
 * *s: pointer to string
 * Return: length of string
 */
unsigned int _strlen(const char *s)
{
	int i = 0;

	for (i = 0; s[i]; ++i)
		;
	return (i);
}
/**
 * _pow - finds exponent of base
 * @base: number to be exp
 * @exp: exp number
 * Return: result of exp
 */
unsigned int _pow(int base, unsigned int exp)
{
	int result = base;

	while (exp > 1)
	{
		result *= base;
		--exp;
	}
	if (exp == 0)
		return (1);
	return (result);
}
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string 0 and 1 chars
 * Return: result of conversion or 0 if string is invalid or null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j, sum = 0;

	if (b == NULL)
		return (0);
	j = _strlen(b);
	for (i = 0; i < j; ++i)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			sum += _pow(2, j - i - 1);
	}
	return (sum);
}
