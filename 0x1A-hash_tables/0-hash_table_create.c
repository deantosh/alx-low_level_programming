/*
 * File: 0-hash_table_create.c
 * Author: Deantosh Daiddoh
 */

#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table of a given size.
 * @size: The size of the hash table.
 *
 * Return: hash table (success) or NULL (fails).
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	/*create a new hash table*/
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);

	/*initialize memory*/
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
