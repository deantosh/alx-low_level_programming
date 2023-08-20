/*
 * Author: Deantosh M Daiddoh
 * File: 8-delete_dnodeint.c
 */

#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at specified index.
 * @head:  A pointer to the linked list.
 * @index: The specific index to delete node.
 *
 * Return: 1 (success) or -1 (fails).
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int list_len;
	int res;

	current = *head;
	if (current == NULL)
		return (-1);
	list_len = dlistint_len(*head);
	if (index > list_len)
		return (-1);

	/*search node and then delete it*/
	res = search_del_node(head, index, list_len);

	return (res);
}

/**
 * search_del_node - Deletes the node at specified index.
 * @head: A pointer to the  doubly linked list.
 * @index: The index of node to delete.
 * @len: The length of the linked list.
 *
 * Return: void.
 */
int search_del_node(dlistint_t **head, unsigned int index, unsigned int len)
{
	dlistint_t *current, *prev, *next;
	unsigned int idx = 0;

	current = *head;

	/*set pos of current ptr to start of list*/
	if (current)
	{
		while (current->prev)
			current = current->prev;
	}
	/*get the position if node to delete*/
	while (current)
        {
		if (idx == index)
		{
			if (idx == 0)
			{
				if (len == 1)
					*head = NULL;
				else
				{
					next = current->next;
					*head = next;
					next->prev = NULL;
				}
			}
			else
			{
				prev = current->prev;
				next = current->next;
				/*connect prev ptr and next ptr*/
				prev->next = next;
				next->prev = prev;
			}
		}
		free(current);
		return (1);
                idx++;
                current = current->next;
	}
	return (-1);
}

/**
 * dlistint_len - Gets the length of a doubly linked list.
 * @h: A pointer to the list.
 *
 * Return: The number of nodes in list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t num_nodes = 0;

	while (current)
	{
		num_nodes++;
		current = current->next; /*move ptr*/
	}
	return (num_nodes);
}
