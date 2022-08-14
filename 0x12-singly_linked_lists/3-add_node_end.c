#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds node to end of list
 * @head: head of list
 * @str: string to be imserted
 * Return: node if successful and null if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *i = malloc(sizeof(list_t)), *j = *head;

	if (i == NULL)
		return (NULL);
	i->str = strdup(str);
	i->len = strlen(str);
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
