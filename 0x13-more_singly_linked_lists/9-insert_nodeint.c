/*
 * File: 9-insert_nodeint.c
 * Author: Deantosh M Daiddoh
 */

#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 *				in the linked list.
 * @head: A pointer to the linked list.
 * @idx:  The index to add the new node.
 * @n: The data to be added in the node.
 *
 * Return: A pointer to the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *prev_node;
	unsigned int index;

	/*allocate memory*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/*add data*/
	new_node->n = n;

	/*get the the prev_node*/
	prev_node = *head;
	for (index = 0; index < (idx - 1); index++)
	{
		if (prev_node->next == NULL)
			return (NULL);

		prev_node = prev_node->next;
	}

	new_node->next = prev_node->next;

	prev_node->next = new_node;
	return (new_node);
}
