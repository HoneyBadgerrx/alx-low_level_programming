#include "lists.h"
/**
 * list_len - returns number of elements in list
 * @h: pointer to first in list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int count =  0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
