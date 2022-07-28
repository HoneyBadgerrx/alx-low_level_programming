#include "main.h"
/**
 * _calloc - creates memory with malloc and inits to 0
 *
 * @nmemb: number of size to create
 * @size: size of each elements
 * Return: pointer to created memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, total;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;
	p = malloc(total);
	if (p == NULL)
		return (NULL);
	return (p);
}
