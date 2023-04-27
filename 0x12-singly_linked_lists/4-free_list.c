/*
 * File: 4-free_list.c
 * Author: Deantosh M Daiddoh
 */

#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the allocated memory.
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp_node;

	while (head)
	{
		temp_node = head;
		head = head->next;
		free(temp_node->str);
		free(temp_node);		
	}
	free(head);
}
