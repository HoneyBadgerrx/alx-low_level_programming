#include "hash_tables.h"
/**
 * hash_table_create - creates hash table
 * @size: size of hash to be created
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t **p;

	p = malloc(sizeof(hash_node_t) * size);
	if (p == NULL)
		return (NULL);
	return (p);
}
