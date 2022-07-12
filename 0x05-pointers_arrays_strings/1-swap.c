#include "main.h"

/**
 * swap_int - swap 2 input ints
 *
 * @a: a pointer
 * @b: a pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *p = *a;
	int *q = *b;
	*a = *q;
	*b = *p;
}
