#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: hast tabke
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *j;
	int flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; ++i)
	{
		while (ht->array[i] == NULL && i < ht->size)
			++i;
		j = ht->array[i];
		while (j)
		{
			if (flag == 1)
				printf(", ");
			printf("\'%s\': \'%s\'", j->key, j->value);
			flag = 1;
			j = j->next;
		}
	}
	printf("}\n");
}
