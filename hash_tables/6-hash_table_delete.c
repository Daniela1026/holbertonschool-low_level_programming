#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: Character table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *dx;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			while (ht->array[index])
			{
				dx = ht->array[index];
				ht->array[index] = (ht->array[index])->next;
				free(dx->key);
				free(dx->value);
				free(dx);
			}
		}
	}

	free(ht->array);
	free(ht);
}
