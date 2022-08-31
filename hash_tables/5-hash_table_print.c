#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: a pointer to the hash table to print
 * Return: No Value
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int n  = 0, i = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (n = 0; n < ht->size; n++)
	{
		if (ht->array[n])
		{
			for (node = ht->array[n]; node; node = node->next)
			{
				if (i == 1)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				i = 1;
			}
		}
	}
	printf("}\n");
}
