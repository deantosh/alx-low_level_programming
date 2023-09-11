/*
 * File: 5-hash_table_print.c
 * Author: Deantosh M Daiddoh
 */

#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash table.
 * @ht: The hash table.
 *
 * Return: hash table(success) or empty array(fails).
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	int h_size, i, set_val = 0;

	if (ht == NULL)
		return;

	h_size = ht->size;

	/*print table key/value*/
	printf("{");
	for (i = 0; i < h_size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (set_val == 1)
				printf(", ");

			curr = ht->array[i];
			while (curr != NULL)
			{
				printf("'%s': '%s'", curr->key, curr->value);
				curr = curr->next;
				if (curr != NULL)
					printf(", ");
			}
			set_val = 1;
		}
	}
	printf("}\n");
}
