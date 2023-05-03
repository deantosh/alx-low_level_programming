/*
 * File: 7-get_nodeint.c
 * Author: Deantosh M Daiddoh
 */

#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Gets the nth node of a linked list.
 * @head:  A pointer to the linked list.
 * @index: The index of the node.
 *
 * Return: A pointer to the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index; j++)
	{
		head = head->next; /*move head to next node*/
	}

	if (head == NULL)
		return (NULL);

	return (head);
}
