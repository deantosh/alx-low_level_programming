/*
 * File: 5-free_listint2.c
 * Author: Deantosh M Daiddoh
 */

#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a linked list.
 * @head: A pointer to the list.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head)
		{
			tmp = (*head);
			*head = (*head)->next;
			free(tmp);
		}
	}
	else
	{
		return;
	}
	free(*head);
	head = 0;
}
