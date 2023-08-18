/*
 * Author: Deantosh Daiddoh
 * File: 1-dlistint_len.c
 */

#include "lists.h"

/**
 * dlistint_len - Gets the length of a doubly linked list.
 * @h: A pointer to the list.
 *
 * Return: The number of nodes in list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t num_nodes = 0;

	while (current)
	{
		num_nodes++;
		current = current->next; /*move ptr*/
	}
	return (num_nodes);
}
