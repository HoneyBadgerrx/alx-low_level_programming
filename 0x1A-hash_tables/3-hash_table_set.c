#include "hash_tables.h"
/**
 * node_create - creates node to reduce side of hash_table_set function
 * @key: key
 * @value: value
 * Return: pointer to created node
 */
hash_node_t *node_create(const char *key, const char *value)
{
	hash_node_t *p;

	p = malloc(sizeof(hash_node_t));
	if (p == NULL)
		return (NULL);
	p->key = strdup(key);
	if (p->key == NULL)
	{
		free(p);
		return (NULL);
	}
	p->value = strdup(value);
	if (p->value == NULL)
	{
		free(p->key);
		free(p);
		return (NULL);
	}
	p->next = NULL;
	return (p);
}
/**
 * hash_table_set - sets key and value
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *j, *new_node;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	j = ht->array[index];
	if (j == NULL)
	{
		new_node = node_create(key, value);
		if (new_node == NULL)
			return (0);
		ht->array[index] = new_node;
		return (1);
	}
	else
	{
		while (j != NULL)
		{
			if (strcmp(j->key, key) != 0)
				j = j->next;
			else
			{
				free(j->value);
				j->value = strdup(value);
				if (j->value == NULL)
					return (0);
				return (1);
			}
		}
	}
	new_node = node_create(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
