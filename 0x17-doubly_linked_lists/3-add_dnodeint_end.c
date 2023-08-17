/*
 * Author: Deantosh M Daiddoh
 * File: 3-add_dnodeint_end.c
 */

#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of the d linked list.
 * @head: A pointer to the linked list.
 * @n: The data to add.
 *
 * Return: A pointer to new node (success) or NULL (fails).
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = h;

	return (new);
}
