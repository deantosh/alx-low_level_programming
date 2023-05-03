/*
 * File: 1-listint_len.c
 * Author: Deantosh M Daiddoh
 */

#include "lists.h"

/**
 * listint_len - Gets the number of linked list elements.
 * @h: A pointer to the linked list.
 *
 * Return: The number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
