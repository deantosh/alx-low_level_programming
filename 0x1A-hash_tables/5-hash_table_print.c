/*
 * Author: Deantosh M Daiddoh
 * File: 5-hash_table_print.c
 */

#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node_ptr;
	int comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node_ptr = ht->array[i];
		while (node_ptr)
		{
			if (comma_flag != 0)
				printf(", ");
			printf("'%s': '%s'", node_ptr->key, node_ptr->value);
			node_ptr = node_ptr->next;
			comma_flag++;
		}
	}
	printf("}\n");
}
