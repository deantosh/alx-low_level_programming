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
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (head);

			head = head->next; /*move head to next node*/
			count++;
		}
		return (head);
	}

	return (NULL);
}
