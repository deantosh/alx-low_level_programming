#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
/**
 * struct list_s - stringly linked list.
 * @str: A pointer to the string data in the list.
 * @len: The length of the string.
 * @next: A pointer to next node.
 *
 * Description: Contains information of the stored data.
 */
typedef struct list_s
{
	char *str;
	int len;
	struct list_s *next;
} list_t;

/*function prototypes*/
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /*LISTS_H*/
