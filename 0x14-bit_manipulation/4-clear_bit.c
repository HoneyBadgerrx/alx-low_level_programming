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
 * clear_bit - clears bit at index
 * @n: ppointer to digit
 * @index: index of bit
 * Return: 1 if successful, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int i;

	if (index > 31)
		return (-1);
	i = _pow(2, index);
	i ~= i;
	*n &= i;
	return (1);
}
