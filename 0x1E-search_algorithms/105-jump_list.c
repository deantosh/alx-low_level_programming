/*
 * Author: Deantosh M Daiddoh
 * File: 105-jump_list.c
 */

#include "search_algos.h"

/**
 * jump_list - Function searches for a value in a sorted list of integers using
 *		the jump search algorithm.
 * @list: A pointer to the head of the list to search in.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: index of the value (if found) or -1 (not found).
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *curr = NULL, *next = NULL, *tmp = list;
	size_t i, j, step;

	if (!list)
		return (NULL);
	step = sqrt(size);  /*Get the jump step*/
	while (tmp->next)
		tmp = tmp->next;
	for (i = 0; i < size; i += step)
	{
		if (i == 0)
			curr = list;
		else
			curr = move_ptr(curr, size);
		next = move_ptr(curr, size);  /*ptr after jump*/
		printf("Value checked at index [%ld] = [%d]\n", next->index, next->n);
		if (next->n >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       curr->index, next->index);
			for (j = curr->index; j < next->index; j++)
			{
				printf("Value checked at index [%ld] = [%d]\n", j, curr->n);
				if (curr->n == value)
					return (curr);
				curr = curr->next;
			}
		}
		if ((value > tmp->n) && (next->index == (size - 1)))
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       curr->index, next->index);
			for (j = curr->index; j < size; j++)
			{
				printf("Value checked at index [%ld] = [%d]\n", j, curr->n);
			curr = curr->next;
			}
		}
	}
	return (NULL);
}

/**
 * move_ptr - Functions moves a pointer using fixed jump steps to a new index.
 * @curr: The current pointer to move.
 * @size: The size of the array.
 *
 * Return: current pointer after the jump (always).
 */
listint_t *move_ptr(listint_t *curr, size_t size)
{
	size_t i, step;

	/*Get the jump step*/
	step = sqrt(size);

	for (i = 0; i < step; i++)
	{
		if (curr->next)
			curr = curr->next;
	}

	return (curr);
}
