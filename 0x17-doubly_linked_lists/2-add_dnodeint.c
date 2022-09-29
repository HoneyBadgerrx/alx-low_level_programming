#include "lists.h"
/**
 * add_dnodeint - ads node to dlist
 * @head: pointer to head pointer
 * @n: value of new pointer
 * Return: address of new element or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p = *head;

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->prev = NULL;
	if (*head == NULL)
		p->next = NULL;
	else
		p->next = (*head)->next;
	*head = p;
	return (p);
}
