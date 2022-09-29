#include "lists.h"
/**
 * dlistint_len - length of dlist
 * @h: pointer to head
 * Return: size of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int c = 0;
	dlistint_t *p;

	if (h == NULL)
		return (c);

	c++;
	p = h->next;
	while (p)
	{
		c++;
		p = p->next;
	}
	return (c);
}
