/*
 * File: 1-list_len.c
 * Author: Deantosh M Daiddoh
 */

#include "lists.h"

/**
 * list_len - Gets the length of the linked list.
 * @h: A pointer to the (malloced)string.
 *
 * Return: The lenght of the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
