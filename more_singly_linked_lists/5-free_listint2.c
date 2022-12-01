#include "lists.h"

/**
**free_listint2 - Frees a structure
*@head: Head of the structure
*
*Return: Number of nodes
*/

void free_listint2(listint_t **head)
{
	if (!head || !*head)
		return;

	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}
