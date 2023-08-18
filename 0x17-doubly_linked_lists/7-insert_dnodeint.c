/*
 * Author: Deantosh M Daiddoh
 * File: 7-insert_dnodeint.c
 */

#include "lists.h"

/**
 * insert_dnodeint_at_index - Adds a node at a specified index.
 * @h: A pointer to doubly linked list.
 * @idx: The index to add new node.
 * @n: New node data.
 *
 * Return: new node (success) or NULL (fails).
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev, *next, *new;
	unsigned int index;

	/*Allocate mem*/
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h)
	{
		while ((*h)->prev)
			*h = (*h)->prev;
	}
	prev = *h;
	next = *h;
	index = 0;
	while (prev)
	{
		if (index == (idx - 1))
			break;
		index++;
		prev = prev->next;
	}
	index = 0;
	while (next)
	{
		if (index == idx)
			break;
		index++;
		next = next->next;
	}
	if (prev && next)
	{
		prev->next = new;
		new->prev = prev;
		new->next = next;
		next->prev = new;
	}
	return (new);
}
