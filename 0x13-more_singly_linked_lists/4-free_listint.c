/*
 * File: 4-free_listint.c
 * Author: Deantosh M Daiddoh
 */

#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees the linked list.
 * @head: A pointer to the list.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp_node;

	while (head != NULL)
	{
		tmp_node = head;
		head = head->next;
		free(tmp_node);
	}
	free(head);
}
