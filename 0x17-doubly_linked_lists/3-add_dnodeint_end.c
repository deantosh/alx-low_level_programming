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
	dlistint_t *current;
	dlistint_t *new;

	/*allocate memory*/
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/*create the new node*/
	new->n = n;
	new->next = NULL;

	current = *head;

	if (current)
	{
		/*set pos of current at the last node in list*/
		while (current->next)
			current = current->next;

		current->next = new;
	}
	else
		*head = new;

	new->prev = current;

	return (new);
}
