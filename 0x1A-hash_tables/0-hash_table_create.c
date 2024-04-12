/*
 * Author: Deantosh Daiddoh
 * File: 0-hash_table_create.c
 */

#include <stdlib.h>
#include <stddef.h>
#include "hash_tables.h"

/**
 * hash_table_create - A function to create a hash table.
 * @size: the size of the array.
 *
 * Return: A pointer to newly created hash table (success) or NULL (fails).
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tb_ptr;

	tb_ptr = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!tb_ptr)
		return (NULL);

	tb_ptr->array = (hash_node_t **)calloc((size_t)size, sizeof(hash_node_t *));
	if (!tb_ptr->array)
		return (NULL);

	return (tb_ptr);
}
