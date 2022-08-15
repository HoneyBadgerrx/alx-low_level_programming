#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: start of list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	if ((*head)->next)
		free_listint2(&((**head).next));
	free(head);
}
