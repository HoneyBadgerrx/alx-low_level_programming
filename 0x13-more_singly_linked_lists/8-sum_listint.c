#include "lists.h"
/**
 * sum_listint - sums n nodes of listint_t list
 * @head: pointer to head of list
 * Return: sum of n of list. 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *i = head;

	while (i != NULL)
	{
		sum += i->n;
		i = i->next;
	}
	return (sum);
}
