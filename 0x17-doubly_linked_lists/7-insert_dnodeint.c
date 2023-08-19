
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
	dlistint_t *new;
	unsigned int list_len;

	/*get length of the linked list*/
	list_len = dlistint_len(*h);

	if (idx > list_len)
		return (NULL);

	/*add at the beginning of the list*/
	if (idx < list_len && idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	/*add at nth pos of the list*/
	if (idx > 0  && idx < list_len)
	{
		new = add_node_nth_index(h, idx, n);
		return (new);
	}

	/*add at the end of a list*/
	if (idx == list_len)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	return (NULL);
}


/**
 * add_node_nth_index -  Adds a node at nth index.
 * @h: A pointer to the linked list.
 * @idx: Index to add the new node.
 * @n: The new node data.
 *
 * Return: new node (success) or NULL (fails)
 */
dlistint_t *add_node_nth_index(dlistint_t **h, unsigned int idx, int n)
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
