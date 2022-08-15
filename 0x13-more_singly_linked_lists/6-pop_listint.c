#include "lists.h"
/**
 * pop_listint - pops head of list
 * @head: pointer to head
 * Return: n of popped node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *i;

	if (*head == NULL)
		return (0);
	n = (**head).n;
	i = (**head).next;
	free(*head);
	*head = i;
	return (n);
}
