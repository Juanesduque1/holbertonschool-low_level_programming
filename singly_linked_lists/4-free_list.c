#include "lists.h"

/**
**free_list - Frees a structure
*@head: Head of the structure
*
*Return: Number of nodes
*/

void free_list(list_t *head)
{
	if (!head)
		return;

	free_list(head->next);
	free(head->str);
	free(head);
}
