/*
 * File: 3-add_node_end.c
 * Author: Deantosh M Daiddoh
 */

#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to the (malloc'd) string.
 * @str: A pointer to the string to be added.
 *
 * Return: A pointer to the memory of new element. (NULL if it fails).
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;
	int index = 0, str_len = 0;

	/*get length of string*/
	while (str[index])
	{
		str_len++;
		index++;
	}

	/*allocate node -- step 1*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/*used in step 5 - set last node as head*/
	last_node = *head;

	/*step 2 - add data*/
	new_node->str = strdup(str);
	new_node->len = str_len;

	/*step 3 - new node (last node) make next of it null*/
	new_node->next = NULL;

	/*step 4 if linked list is empty make new node as head*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/*step 5 - else traverse till last node*/
	while (last_node->next != NULL)
		last_node = last_node->next;

	/*step 6 - change the  next of last node*/
	last_node->next = new_node;
	return (new_node);
}
