/*
 * File: 0-print_list.c
 * Author: Deantosh M Daiddoh
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Prints the elements of a list.
 * @h: A pointer to the list.
 *
 * Return: The number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] ");
			printf("(nil)\n");
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		/*move head to the next node*/
		h = h->next;
		count++;
	}
	return (count);
}
