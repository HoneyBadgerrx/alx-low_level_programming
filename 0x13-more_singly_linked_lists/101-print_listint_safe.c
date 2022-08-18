#include "lists.h"
/**
 * print_listint_safe - prints ekements of listint_t list safely
 * @head: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int count = 0;
	const listint_t *i;

	if (head == NULL)
		exit(98);
	printf("%d\n", head->n);
	count++;
	i = head->next;
	while (i != NULL)
	{
		/*printf("%d\n", i->n);*/
		count++;
		if (count == 10)
			break;
		printf("%p %p\n", i, head);
		i = i->next;
	}
	return (count);
}
