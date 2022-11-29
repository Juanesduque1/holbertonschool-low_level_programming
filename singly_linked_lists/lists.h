#ifndef HEADER_FILE
#define HEADER_FILE

#include "stdlib.h"
#include "stdio.h"

/* Prototypes */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

/* Structures */
typedef struct size_t
{
	int data;
	struct node_t *next;

} size_t;

#endif
