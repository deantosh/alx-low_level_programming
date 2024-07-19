#ifndef SEARCH_ALGORITHMS_H
#define SEARCH_ALGORITHMS_H

/*Headers*/
#include <stdio.h>
#include <math.h>
#include <stddef.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/*Function prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int find_value(int *array, int low, int high, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int interpolate_value(int *array, int low, int high, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);

/*Helper functions*/
void print_subarray(int *array, int low, int high);
int advanced_binary_search(int *array, int low, int high, int value);
listint_t *move_ptr(listint_t *curr, size_t size);

#endif /*SEARCH_ALGORITHMS_H*/
