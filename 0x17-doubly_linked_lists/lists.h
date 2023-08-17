#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_t - Defines double linked node object.
 * @n: The node data.
 * @next: A pointer to the next node.
 * @prev: A pointer to the previous node.
 */
typedef struct dlistint_t
{
	size_t n;
	struct dlistint_t *next;
	struct dlistint_t *prev;
} dlistint_t;

/*Function prototype*/
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

#endif /*LISTS_H*/
