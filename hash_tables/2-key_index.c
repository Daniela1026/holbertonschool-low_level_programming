#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: Character char
 * @size: Character int
 * Return: index at which the key/value pair is stored in the array of
 * the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	index = index % size;

	return (index);
}
