#include "hash_tables.h"
/**
 * free_list - frees linked list
 * @head: head of list
 * Return: void
 */
void free_list(hash_node_t *head)
{
	hash_node_t *i = head, *next = head;

	while (next)
	{
		next = i->next;
		free(i->key);
		free(i->value);
		free(i);
		i = next;
	}
}
/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; ++i)
	{
		while (!ht->array[i] && i < ht->size)
			++i;
		free_list(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
