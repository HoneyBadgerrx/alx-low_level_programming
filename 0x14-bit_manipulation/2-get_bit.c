#include "main.h"
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
	n >>= index;
	return (n & 1);
}
