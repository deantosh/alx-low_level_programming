/*
 * Author: Deantosh Daiddoh
 * File: 0-print_dlistint.c
 */

#include "lists.h"

/**
 * print_dlistint - Prints elements of a singly linked list.
 * @h: A pointer to the list.
 *
 * Return: The number of nodes in list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t num_nodes = 0;

	while (current)
	{
		printf("%lu\n", current->n);
		num_nodes++;
		current = current->next; /*move ptr*/
	}
	return (num_nodes);
}
