/*
 * File: 6-hash_table_delete.c
 * Author: Deantosh M Daiddoh
 */

#include "hash_tables.h"

/**
 * hash_table_delete - Deletes the hash table.
 * @ht: The hash table to delete.
 *
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			/*check if index has other elements*/
			node = ht->array[i];
			while (node)
			{
				free(node->key);
				free(node->value);
				temp = node;
				node = node->next;
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
