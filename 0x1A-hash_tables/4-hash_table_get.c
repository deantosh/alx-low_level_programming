/*
 * File: 4-hash_table_get.c
 * Author: Deantosh Daiddoh
 */

#include "hash_tables.h"

/**
 * hash_table_get - gets the value associated with a key.
 * @ht: the hash table.
 * @key: the key to search for value.
 *
 * Return: key value(success) or NULL(fails).
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);

	/*if key exists in array*/
	if (ht->array[index])
	{
		hash_node_t *curr;

		curr = ht->array[index];

		while (curr)
		{
			if (strcmp(curr->key, key) == 0)
				return (curr->value);
			curr = curr->next;
		}
	}
	return (NULL);
}
