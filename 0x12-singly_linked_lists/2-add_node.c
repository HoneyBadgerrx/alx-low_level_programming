#include "lists.h"
#include <string.h>
/**
 * add_node - adds node tolist
 * @head: node to be aded to
 * @str: string to be duplicated
 * Return: null if failes, address if successful
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *i = malloc(sizeof(list_t));

	if (i == NULL)
		return (NULL);
	i->str = strdup(str);
	i->len = strlen(str);
	if (*head == NULL)
		i->next = NULL;
	else
		i->next = *head;
	*head = i;
	return (i);
}
