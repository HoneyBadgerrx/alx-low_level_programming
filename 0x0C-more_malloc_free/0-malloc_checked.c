#include "main.h"
/**
 * malloc_checked - returns pointer to allocated memory
 *
 * @b: amount of memory to be allocated
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
