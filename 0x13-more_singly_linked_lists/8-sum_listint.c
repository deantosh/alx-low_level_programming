/*
 * File: 8-sum_listint.c
 * Author: Deantosh M Daiddoh
 */

#include "lists.h"

/**
 * sum_listint - Gets the sum of the integers in the linked list.
 * @head: A pointer to the linked list.
 *
 * Return: Sum of integers.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	else
	{
		return (0);
	}
	return (sum);
}
