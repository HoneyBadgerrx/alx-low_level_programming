#include "lists.h"
/**
 * reverse_listint - reverses list
 * @head: pointer to head of program
 * Return: pointer to new head or nul if failed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i = NULL, *j;

	if (*head == NULL)
		return (NULL);
	while (j != NULL)
	{
		j = (**head).next;
		(**head).next = i;
		i = *head;
		if (j != NULL)
			*head = j;
	}
	return (*head);
}
