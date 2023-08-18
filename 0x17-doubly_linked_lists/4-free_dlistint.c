/*
 * Author: Deantosh Daidddoh
 * File: 4-free_dlistint.c
 */

#include "lists.h"

/**
 * free_dlistint - Frees the doubly linked list.
 * @head: A pointer to the linked list.
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	/*reset pos of the current ptr*/
	if (head)
	{
		while (head->prev)
			head = head->prev;
	}

	/*free the elements in the list*/
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp); /*free data in node*/
	}
}
