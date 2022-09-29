#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to head poointer
 * @index: index of node to be del
 * Return: 1 if successful, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *p;

	if (head == NULL || *head == NULL)
		return (-1);
	p = *head;
	if (index == 0)
	{
		p = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(p);
		return (1);
	}
	for (i = 0; i < index; ++i)
	{
		if (p == NULL)
			return (-1);
		p = p->next;
	}
	if (p->next)
		p->next->prev = p->prev;
	p->prev->next = p->next;
	free(p);
	return (1);
}
