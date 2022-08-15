#include "lists.h"
#include <string.h>
/**
 * add_nodeint_end - adds node to end of list
 * @head: head of list
 * @n: integer to be imserted
 * Return: node if successful and null if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i = malloc(sizeof(listint_t)), *j = *head;

	if (i == NULL)
		return (NULL);
	i->n = n;
	i->next = NULL;
	if (*head == NULL)
		*head = i;
	else
	{
		while (j->next)
			j = j->next;
		j->next = i;
	}
	return (i);
}
