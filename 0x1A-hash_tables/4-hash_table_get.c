/*
 * Author: Deantosh M Daiddoh
 * File: 4-hash_table_get.c
 */

#include <stddef.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key from a hash table.
 * @ht: a hash table
 * @key: the key to search in the hash table
 *
 * Return: value associated with the key (success) or NULL (key not found).
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

	/*validate input*/
	if (ht == NULL || key == NULL)
		return (NULL);

	/*get the key index where the value is stored*/
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		ptr = ht->array[index];
		while (ptr)
		{
			if (strcmp((const char *)ptr->key, key) == 0)
				return (ptr->value);
			/*move pointer*/
			ptr = ptr->next;
		}
	}
	/*fails to find key*/
	return (NULL);
}
