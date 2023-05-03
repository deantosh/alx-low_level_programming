/*
 * File: 6-pop_listint.c
 * Author: Deantosh M Daiddoh
 */

#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of the linked list.
 * @head: A pointer to the list.
 *
 * Return: The head node data.
 */
int pop_listint(listint_t **head)
{
	listint_t *delete_node;
	int node_data;

	if (*head == NULL)
		return (0);

	delete_node = (*head);
	*head = (*head)->next; /*move head to next node*/
	node_data = delete_node->n;
	free(delete_node);

	return (node_data);
}
