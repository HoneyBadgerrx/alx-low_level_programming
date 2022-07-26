#include "main.h"
/**
 * alloc_grid -creates 2d array initialised to 0
 *
 * @width: width of array
 * @height: height of array
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(width * height * sizeof(int));
	if (p == NULL)
		return (NULL);
	return (&p);
}
