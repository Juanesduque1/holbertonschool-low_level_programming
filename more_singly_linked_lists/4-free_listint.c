#include "lists.h"

/**
**free_listint - Frees a structure
*@head: Head of the structure
*
*Return: Number of nodes
*/

void free_listint(listint_t *head)
{
	if (!head)
		return;

	free_listint(head->next);
	free(head);
}
