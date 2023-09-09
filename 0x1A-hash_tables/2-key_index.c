/*
 * File: 2-key_index.c
 * Author: Deantosh Daiddoh
 */

#include "hash_tables.h"

/**
 * key_index - gets the key index used to assign value in hash table.
 * @key: a pointer to the key.
 * @size: size of the hash table.
 *
 * Return: index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	/*create the hash value*/
	hash_value = hash_djb2(key);

	/*compute its index*/
	index = hash_value % size;

	return (index);
}
