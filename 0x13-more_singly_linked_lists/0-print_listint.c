/*
 * File: 0-print_listint.c
 * Author: Deantosh M Daiddoh
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a list.
 * @h: A pointer to the list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	int val;

	while (h != NULL)
	{
		val = h->n;
		printf("%d\n", val);

		count++; /*count number of elements in the list*/

		h = h->next; /*move pointer to the next node*/
	}
	return (count);
}
