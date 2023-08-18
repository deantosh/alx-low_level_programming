/*
 * Author: Deantosh Daiddoh
 * File: 2-add_dnodeint.c
 */

#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of the linked list.
 * @head: A pointer to the list.
 * @n: The new node data.
 *
 * Return: A pointer to new element (success) or NULL (fails).
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new;

	/*allocate mem*/
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/*create the new node*/
	new->n = n;
	new->prev = NULL;

	current = *head;

	if (current)
	{
		/*set pos of curr at start of list*/
		while (current->prev)
			current = current->prev;
		new->next = current;
		current->prev = new;
	}
	else
	{
		new->next = current;
	}
	*head = new;

	return (new);
}
