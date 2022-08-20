#include "main.h"
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
 * get_bit - gets bit at index
 * @n: bits to check
 * @index: index of required bit
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 31)
		return (-1);
	i = _pow(2, index);
	return (i & n);
}
