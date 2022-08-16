#include "lists.h"
/**
 * get_nodeint_at_index - gets node of index
 * @head: pointe to head of list
 * @index: index of node
 * Return: pointer to requested node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *t = head;

	if (t == NULL)
		return (NULL);
	for (i = 0; i != index; ++i)
	{
		if (t->next == NULL)
			return (NULL);
		t = t->next;
	}
	return (t);
}
