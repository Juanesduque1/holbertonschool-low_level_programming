#include "lists.h"

/**
**free_listint2 - Frees a structure
*@head: Head of the structure
*
*Return: Number of nodes
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *aux = *head;

	if (!head)
		return;

	while (*head)	
	{
		tmp = *head;
		head = &aux->next;
		free(tmp);
	}
	*head = NULL;
}
