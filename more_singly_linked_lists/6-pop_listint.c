#include "lists.h"

/**
**pop_listint - Deletes the first node
*@head: Head of the structure
*
*Return: Head of the structure
*/

int pop_listint(listint_t **head)
{
	listint_t *aux;
	int header;

	if (!head || !*head)
		return (0);

	aux = *head;
	header = (*head)->n;
	*head = aux->next;

	free(aux);

	return (header);
}
