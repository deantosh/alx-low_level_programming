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
	hash_node_t *data, *node, *tmp;

	/*input validation*/
	if (!ht || !key || !value || *key == '\0')
		return (0);

	/*create node*/
	data = create_node(key, value);

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
		node = ht->array[idx];

		/*check if the key exist and update its value*/
		while (node)
		{
			if (strcmp(node->key, key) == 0)
			{
				node->value = (char *)value;
				return (1);
			}
			node = node->next;
		}
		/*handle collision*/
		tmp = ht->array[idx];
		ht->array[idx] = data;
		data->next = tmp;
	}
	return (1);
}

/**
 * create_node - creates a node to add to hash table
 * @key: the key to add to node
 * @value: the value associated to the key
 *
 * Return: node (success) or NULL (fails).
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *data;

	data = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (data == NULL)
		return (NULL);

	data->key = (char *)malloc(strlen(key) + 1);
	if (data->key == NULL)
		return (NULL);
	/*copy data*/
	strcpy(data->key, key);

	/*duplicate value*/
	data->value = strdup(value);
	if (data->value == NULL)
		return (NULL);

	return (data);
}
