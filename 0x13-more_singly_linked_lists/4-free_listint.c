#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: start of list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next)
		free_listint(head->next);
	free(head);
}
