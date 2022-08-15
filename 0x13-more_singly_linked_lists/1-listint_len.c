#include "lists.h"
/**
 * listint_len - number of nodes in list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *i = h;

	while (i != NULL)
	{
		i = i->next;
		count++;
	}
	return (count);
}
