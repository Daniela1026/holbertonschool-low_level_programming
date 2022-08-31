#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: Character  hash table
 * @key: Character char
 * @value: Character char
 * Return: 1 and  0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *tmp;

	if ((!key || !value) || (!key[0] || !ht) || (!ht->array))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[index])
	{
		node = malloc(sizeof(hash_node_t));
		if (!node)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = NULL;
		ht->array[index] = node;
		return (1);
	}
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp((const char *)key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	if (!tmp)
	{
		node = malloc(sizeof(hash_node_t));
		if (!node)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
	return (1);
}
