/*
 * File: 1-list_len.c
 * Author: Deantosh M Daiddoh
 */

#include "lists.h"

/**
 * list_len - Gets the length of the linked list.
 * @h: A pointer to the nodes.
 *
 * Return: The lenght of the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		/*point head to the next node*/
		h = h->next;
	}
	return (count);
}
