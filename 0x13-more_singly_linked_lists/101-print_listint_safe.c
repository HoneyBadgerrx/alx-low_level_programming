#include "lists.h"
/**
 * print_listint_safe - prints ekements of listint_t list safely
 * @head: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int count = 0;
	const listint_t *i = head;

	while (i != NULL)
	{
		if (i == head)
			break;
		printf("%d\n", i->n);
		i = i->next;
		count++;
	}
	return (count);
}
