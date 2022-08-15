#include "lists.h"
#include <string.h>
/**
 * add_nodeint - adds node tolist
 * @head: node to be aded to
 * @n: int to be duplicated
 * Return: null if fails, address if successful
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i = malloc(sizeof(listint_t));

	if (i == NULL)
		return (NULL);
	i->n = n;
	i->next = *head;
	*head = i;
	return (i);
}
