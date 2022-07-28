#include "main.h"
/**
 * array_range - returns pointer to mem containing range of inputs
 *
 * @min: min range
 * @max: max range
 * Return: pointer to range
 */
int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		p[i] = min + i;
	return (p);
}
