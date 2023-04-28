/*
 * File: 2-add_node.c
 * Author: Deantosh M Daiddoh
 */

#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of the list_t list.
 * @head: A pointer to the list node.
 * @str: A pointer to the string to be added.
 *
 * Return: A pointer to the memory of new element. (NULL if it fails).
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int index = 0, str_len = 0;

	/*get length of string*/
	while (str[index])
	{
		str_len++;
		index++;
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/*duplicate string*/
	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = *head;
	
	*head = new_node;

	return (new_node);
}
