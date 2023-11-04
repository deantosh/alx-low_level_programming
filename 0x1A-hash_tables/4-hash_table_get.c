/*
 * Author: Deantosh M Daiddoh
 * File: 4-hash_table_get.c
 */

#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key.
 * @ht: The hash table.
 * @key: The key to search in the hash table.
 *
 * Return: value (success) or NULL (fails).
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr = NULL;

	if (ht == NULL || key == NULL)
		return (NULL)

	/*get the index*/
	index = key_index(key, ht->size);

	ptr = ht->array[index];

	if (ptr)
	{
		if (ptr->next == NULL)
		{
			return (ptr->value);
		}
		else
		{
			while (ptr)
			{
				if (!(strcmp(key, ptr->key)))
					return (ptr->value)
				ptr++;
			}
		}
	}

	return (NULL);
}
