/*
 * Author: Deantosh M Daiddoh
 * File: 3-hash_table_set.c
 */

#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table
 * @key: the key to add
 * @value: the value to add
 *
 * Return: 1 (success) or 0 (fails)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *data;

	/*create node*/
	data = malloc(sizeof(hash_node_t));
	if (!data)
		return (0);
	data->key = malloc(strlen(key) + 1);
	if (!data->key)
		return (0);
	data->value = malloc(strlen(value) + 1);
	if (!data->value)
		return (0);

	/*set value of node*/
	strcpy(data->key, key);
	strcpy(data->value, value);

	/*get the index of associated key*/
	idx = key_index((const unsigned char *)key, ht->size);

	/*set node at index*/
	if (!ht->array[idx])
	{
		ht->array[idx] = data;
		data->next = NULL;
	}
	else
	{
		data->next = ht->array[idx];
		ht->array[idx] = data;
	}
	return (1);
}
