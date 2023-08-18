/*
 * Author: Deantosh Daiddoh
 * File: 5-get_dnodeint.c
 */

#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the node of a linked list
 *				at specified index.
 * @head: A pointer to the linked list.
 * @index: The index of the node.
 *
 * Return: node at index (success) or NULL (fails).
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int idx = 0;

	/*if list is empty*/
	if (head == NULL)
		return (NULL);

	/*move head at the start of list*/
	if (head)
	{
		while (head->prev)
			head = head->prev;
	}

	/*set the current ptr*/
	curr = head;

	while (curr)
	{
		/*check if true*/
		if (idx == index)
			return (curr);
		idx++;
		curr = curr->next;
	}
	return (NULL);
}
