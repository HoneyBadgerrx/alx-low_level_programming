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
 * flip_bits - checks dif between ints
 * @n: first int
 * @m: second int
 * Return: number of diferences
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = _pow(2, sizeof(unsigned long int) * 8 - 1);
	unsigned int count = 0;

	while (i != 0)
	{
		if ((i & n) != (i & m))
			count++;
		i >>= 1;
	}
	return (count);
}
