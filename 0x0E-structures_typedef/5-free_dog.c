#include "dog.h"
/**
 * free_dog - frees a structure dog
 * @d: structure dog child
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free (d);
}
