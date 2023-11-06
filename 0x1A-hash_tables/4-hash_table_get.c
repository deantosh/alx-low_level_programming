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
	unsigned long int i;
	hash_node_t *curr = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	/*get the index*/
	i = key_index((const unsigned char *)key, ht->size);

	if (ht->array[i])
	{
		if (ht->array[i]->next == NULL)
		{
			return (ht->array[i]->value);
		}
		else
		{
			curr = ht->array[i];
			while (curr)
			{
				if (strcmp(curr->key, key) == 0)
					return (curr->value);
				curr = curr->next;
			}
		}
	}

	return (NULL);
}
