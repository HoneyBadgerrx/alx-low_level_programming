#include "lists.h"
/**
 * print_dlistint - prints doubly linked list
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 1;
	dlistint_t *p;

	if (h == NULL)
		return (0);

	printf("%d\n", h->n);
	p = h->next;
	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
		count++;
	}

	return (count);
}
