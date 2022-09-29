#include "lists.h"
/**
 * free_dlistint - frees dlist
 * @head: pointer to head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	if (head == NULL)
		return;

	while (head)
	{
		p = head->next;
		free(head->prev);
		free(head);
		head = p;
	}
}
