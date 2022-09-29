#include "lists.h"
/**
 * add_dnodeint - ads node to dlist
 * @head: pointer to head pointer
 * @n: value of new pointer
 * Return: address of new element or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p;

	if (head == NULL)
		return (NULL);
	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->prev = NULL;
	if (*head == NULL)
		p->next = NULL;
	else
	{
		p->next = *head;
		p->next->prev = p
	}
	*head = p;
	return (p);
}
