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

	/*input validation*/
	if (!ht || !key || !value || *key == '\0')
		return (0);

	/*create node*/
	data = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!data)
		return (0);
	data->key = (char *)malloc(strlen(key) + 1);
	if (!data->key)
		return (0);
	data->value = (char *)strdup(value);
	if (!data->value)
		return (0);

	/*set value of node*/
	strcpy(data->key, key);

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
