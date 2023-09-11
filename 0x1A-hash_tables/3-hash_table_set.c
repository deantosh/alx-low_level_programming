/*
 * File: 3-hash_table_set.c
 * Author: Deantosh Daiddoh
 */

#include "hash_tables.h"

/**
 * hash_table_set - Inserts an item in the hash table.
 * @ht: The hash table.
 * @key: The item key.
 * @value: The item value.
 *
 * Return: 1 (success) or 0 (fails).
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index, i;
	char *value_copy;

	if (ht == NULL)
		return (0);
	value_copy = strdup(value);
	/*get the index to add the new_node*/
	index = key_index((const unsigned char *)key, ht->size);
	i = index;
	while (ht->array[i])
	{
		/*case 1: update value of a key -- if key is the same*/
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);/*deallocate*/
			ht->array[i]->value = value_copy;
			return (1);
		}
		i++;
	}
	/*case 2: if key not same -- add at the beginning of index*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(value_copy);
		free(new_node);
		return (0);
	}
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
