/*
 * Author: Deantosh M Daiddoh
 * File: 0-hash_table_create.c
 */

#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: hash table (success) or NULL (fails).
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	/*allocate mem for the table*/
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	/*allocate mem for array items*/
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht == NULL)
		return (NULL);

	return (ht);
}
