#include "lists.h"

/**
* list_len - returns the number of elements in a linked list_t list
* @h: pointer to the head of the list
*
* Return: number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Function prototypes */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */


	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
