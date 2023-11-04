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
	hash_node_t *h_item, *ptr = NULL;
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
	/*move ptr to the index*/
	ptr = ht->array[i];
	if (ptr) /*key exists*/
	{
		if (strcmp(ptr->key, key) == 0)/*update key*/
			ptr->value = (char *)value;
		else /*add node at the end*/
		{
			while (ptr)
			{
				if (ptr->next == NULL)
				{
					ptr->next = h_item;
					return (1);
				}
				ptr++;
			}
		}
	}
	else /*does not exist*/
	{
		ht->array[i] = h_item;
	}
	return (1);
}
