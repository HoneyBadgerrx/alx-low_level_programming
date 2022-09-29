#include "lists.h"
/**
 * get_dnodeint_at_index - get index node
 * @head: pointer to head
 * @index: index of node
 * Return: pointer to node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; ++i)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
