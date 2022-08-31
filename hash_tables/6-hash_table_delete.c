#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: Character table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hash;
	hash_node_t *table;
	unsigned int i = 0;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		hash = ht->array[i];
		if (hash != NULL && hash->next == NULL)
		{
			free(hash->key);
			free(hash->value);
			free(hash);
		}
		else if (hash != NULL && hash->next != NULL)
		{
			while (hash != NULL)
			{
				temp = hash->next;
				free(hash->key);
				free(hash->value);
				free(hash);
				hash = table;
			}
			free(hash);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
