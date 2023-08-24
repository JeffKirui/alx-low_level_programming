#ifndef LISTS_HEADER_H
#define LISTS_HEADER_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed str)
 * @len: length of str
 * @next: points to next node
 *
 * Description: singly linked list node struct
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void __attribute__((constructor)) func(void);
#endif /* LIST_HEADER_H*/
