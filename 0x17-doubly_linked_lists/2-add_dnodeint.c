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

	/*allocate memory*/
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/*set values of the new node*/
	new->n = n;
	new->prev = NULL;

	/*reset current ptr at the begining of the list*/
	current = *head;
	if (current != NULL)
	{
		/*if current ptr not at the initial pos*/
		while (current->prev != NULL)
			current = current->prev;
	}
	new->next = current;

	if (current != NULL)
		current->prev = new;

	*head = new;

	return (new);
}
