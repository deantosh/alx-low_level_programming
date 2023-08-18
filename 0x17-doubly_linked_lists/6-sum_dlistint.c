/*
 * Author: Deantosh Daiddoh.
 * File: 6-sum_dlistint.c
 */

#include "lists.h"

/**
 * sum_dlistint - Adds all the data in a doubly linked list.
 * @head: A pointer to the linked list.
 *
 * Return: sum (success) or 0 (fails).
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (current == NULL)
		return (sum);

	/*move curr ptr to the start of list*/
	if (current)
	{
		while (current->prev)
			current = current->prev;
	}
	/*tranverse the linked list - add*/
	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
