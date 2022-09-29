#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * insert_dnodeint_at_index - inserts a new node atidx
 * @h: double pointer to head
 * @idx: index
 * @n: value
 * Return: new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *q;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	q = *h;
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && q != NULL; i++)
			q = q->next;
		if (q == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		next = q->next;
		new->prev = q;
		q->next = new;
	}
	new->n = n;
	new->next = next;
	if (new->next)
		new->next->prev = new;
	return (new);
}
