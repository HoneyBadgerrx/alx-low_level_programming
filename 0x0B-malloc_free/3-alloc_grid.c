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
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **)malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; ++i)
	{
		*(p + i) = (int *)malloc(sizeof(int) * width);
		if (*(p + i) == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(p[j]);
				++j;
			}
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; ++j)
			p[i][j] = 0;
	}
	return (p);
}
