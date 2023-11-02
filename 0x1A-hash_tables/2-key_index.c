
/*
 * Author: Deantosh Daiddoh
 * File: 2-key_index.c
 */

#include "hash_tables.h"

/**
 * key_index - creates the index of a given key.
 * @key: The data key.
 * @size: The size of the hash table.
 *
 * Return: key index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	/*get the index from hash*/
	index = (hash_djb2(key) % size);

	return (index);
}
