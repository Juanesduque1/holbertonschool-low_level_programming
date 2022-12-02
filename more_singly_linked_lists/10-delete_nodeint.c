#include "lists.h"

/**
**delete_nodeint_at_index - Deletes a node at a position given with index
*@head: Head of the structure
*@index: Index that points where to delete the node
*
*Return: Head of the structure
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *aux, *aux_len, *delete;
	unsigned int i = 0, list_len = 0;

	if (!*head)
		return (-1);

	aux_len = *head;
	while (aux_len)
	{
		list_len++;
		aux_len = aux_len->next;
	}
	if (index > list_len)
		return (-1);

	aux = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1; i++)
			aux = aux->next;

		delete = aux->next;
		aux->next = delete->next;
		free(delete);
		return (1);
	}
	else
	{
		*head = (*head)->next;
		free(aux);
		return (1);
	}
}
