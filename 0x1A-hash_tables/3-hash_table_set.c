/*
 * Author: Deantosh M Daiddoh
 * File: 3-hash_table_set.c
 */

#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key to add to table.
 * @value: The key corresponding value to add to table.
 *
 * Return: 1 (success) or 0 (fails).
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *h_item, *curr_item = NULL;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	/*allocate mem*/
	h_item = malloc(sizeof(hash_node_t));
	if (h_item == NULL)
		return (0);
	/*create the element*/
	h_item->key = strdup(key);
	h_item->value = strdup(value);
	/*get the index*/
	i = key_index((const unsigned char *)key, ht->size);
	curr_item = ht->array[i];
	if (ht->array[i]) /*key exists*/
	{
		if (strcmp(ht->array[i]->key, key) == 0)/*update key*/
			ht->array[i]->value = (char *)value;
		else /*add node at the beginning*/
		{
			ht->array[i] = h_item;
			h_item->next = curr_item;
		}
	}
	else /*does not exist*/
	{
		ht->array[i] = h_item;
		h_item->next = NULL;
	}
	return (1);
}
