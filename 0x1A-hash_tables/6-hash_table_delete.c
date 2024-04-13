/*
 * Author: Deantosh M Daiddoh
 * File: 6-hash_table_delete.c
 */

#include <stdlib.h>
#include <stddef.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *tmp;

	/*validate input*/
	if (ht == NULL)
		return;

	for (size_t i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			tmp = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
