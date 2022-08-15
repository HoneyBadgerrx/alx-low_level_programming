#include "lists.h"
/**
 * print_listint - prints ekements of listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *i = h;

	while (i != NULL)
	{
		printf("%d\n", i->n);
		i = i->next;
		count++;
	}
	return (count);
}
