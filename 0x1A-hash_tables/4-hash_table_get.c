#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value from key
 * @ht: hash table
 * @key: key of value to be retreived
 * Return: Value of key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || ht->size == 0 || ht->array == NULL || key == NULL ||
			strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) != 0)
			tmp = tmp->next;
		else
			return (tmp->value);
	}

	return (NULL);
}
