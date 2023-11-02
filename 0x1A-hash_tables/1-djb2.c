/*
 * Author: Deantosh Daiddoh
 * File: 1-djb2.c
 */

#include "hash_tables.h"

/**
 * hash_djb2 - hash table algorithm.
 * @str: The key to hash.
 *
 * Return: hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
