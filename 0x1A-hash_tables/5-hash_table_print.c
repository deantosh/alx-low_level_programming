/*
 * Author: Deantosh M Daiddoh
 * File: 5-hash_table_print.c
 */

#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table.
 *
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned long int i;
	int comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		if (curr)
		{
			if (comma_flag > 0)
				printf(", ");
			if (curr->next)
			{
				while (curr)
				{
					printf("'%s': '%s'", curr->key, curr->value);
					if (curr->next)
						printf(", ");
					curr = curr->next;
				}
			}
			else
				printf("'%s': '%s'", curr->key, curr->value);
			comma_flag++;
		}
	}
	printf("}\n");
}
