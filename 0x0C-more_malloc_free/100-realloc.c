#include "main.h"
/**
 * _realloc - reallocates memory of pointer
 *
 * @ptr: pointer to referenced memory
 * @old_size: previous size of pointer add
 * @new_size: new size of memory of pointer
 * Return: pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *p;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p)
	}
	if (ptr != NULL && new_size = 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; ++i)
		p[i] = ptr[i];
	free(ptr);
	return (p);
}
