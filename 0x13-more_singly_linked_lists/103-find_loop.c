#include "lists.h"
/**
 * find_listint_loop - finds loopp in the list if there is
 * @head: pointer to head of loop
 * Return: pointer to beginning of loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i = head, *j = head;

	while (i && j && j->next)
	{
		i = i->next;
		j = j->next->next;
		if (i == j)
			break;
	}
	if (i == NULL || j == NULL || j->next == NULL)
		return (NULL);
	if (head == i)
		return (i);
	while (head != i)
	{
		i = i->next;
		while (i != j)
		{
			if (head == i)
				return (head);
			i = i->next;
		}
		head = head->next;
	}
	return (NULL);
}
