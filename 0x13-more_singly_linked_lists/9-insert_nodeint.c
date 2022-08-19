#include "lists.h"
/**
 * insert_nodeint_at_index - read the function name
 * @head: pointer to head of list
 * @idx: index where node is to be placed
 * @n: integer to fill into member n
 * Return: pointer to created node. NULL if unsuccesful
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *j = *head, *new, *prev = *head;

	if (head == NULL)
		return (NULL);
	for (i = 0; i != idx; ++i)
	{
		if (j == NULL)
			return (NULL);
		prev = j;
		j = j->next;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = j;
		prev->next = new;
	}
	return (new);
}
