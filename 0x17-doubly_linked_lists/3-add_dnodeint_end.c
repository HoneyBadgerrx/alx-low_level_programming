#include "lists.h"
/**
 * add_dnodeint_end - adds node to the end of dlist
 * @head: pointer to head pointer
 * @n: valie of node
 * Return: address of nde
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *p = *head;

	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		(*head)->n = n;
		(*head)->prev = NULL;
		(*head)->next = NULL;
	}
	while (p->next)
		p = p->next;
	p->next = malloc(sizeof(dlistint_t));
	p->next->n = n;
	p->next->next = NULL;
	p->next->prev = p;

	return (p->next);
}