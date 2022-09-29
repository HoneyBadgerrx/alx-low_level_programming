#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at inedx
 * @h: pointer to h pointer
 * @idx: index of new node
 * @n: value of node
 * Return: address of new node or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p = *h, *new;
	unsigned int i = 0;

	if (*h == NULL && idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (NULL);
	}
	for (i = 0; i < idx; ++i)
	{
		if (p == NULL)
			return (NULL);
		p = p->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	p->prev->next = new;
	new->next = p;
	new->prev = p->prev;
	p->prev = new;
	return (new);
}
