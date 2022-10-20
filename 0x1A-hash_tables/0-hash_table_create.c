#include "hash_tables.h"
/**
 * hash_table_create - creates hash table
 * @size: size of hash to be created
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *p;

	if (size < 0)
		return (NULL);
	p = malloc(sizeof(hash_table_t));
	if (p == NULL)
		return (NULL);
	p->size = size;
	p->array = malloc(sizeof(hash_node_t) * size);
	if (p->array == NULL)
		return (NULL);
	return (p);
}
