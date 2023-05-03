/*
 * File: 2-add_nodeint.c
 * Author: Deantosh M Daiddoh
 */

#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the beginning of a list.
 * @head: A pointer to the list.
 * @n: Data to be added at the node.
 *
 * Return: A pointer to the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
