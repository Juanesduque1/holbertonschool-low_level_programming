#include "lists.h"

/**
**free_dlistint - Frees a structure
*@head: Head of the structure
*
*Return: Number of nodes
*/

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	free_dlistint(head->next);
	free(head);
}
