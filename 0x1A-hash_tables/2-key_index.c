/*
 * Author: Deantosh M Daiddoh
 * File: 2-key_index.c
 */

#include "hash_tables.h"

/**
 * key_index - gets the index of a key.
 * @key: the key
 * @size: the size of array of the hash table
 *
 * Return: index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx, hash;

	/*get the hash value*/
	hash = hash_djb2(key);

	/*calculate the index*/
	idx = hash % size;

	return (idx);
}
