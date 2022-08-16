#include "lists.h"
/**
 * delete_nodeint_at_index - read the name
 * @head: pointer to head of list
 * @index: index of node ot be deleted
 * Return: 1 if successful, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *j = *head, *prev = *head;

	if (*head == NULL)
		return (-1);
	for (i = 0; i != idx; ++i)
	{
		if (j == NULL)
			return (-1);
		prev = j;
		j = j->next;
	}
	if (index == 0)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		prev->next = j->next;
		free(j);
	}
	return (1);
}
