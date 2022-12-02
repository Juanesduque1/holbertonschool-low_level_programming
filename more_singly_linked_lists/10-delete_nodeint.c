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

	listint_t *aux = *head, *delete;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	if (index != 0)
	{
		for (i = 0; i < index - 1; i++)
			aux = aux->next;

		delete = aux->next;
		aux->next = (aux->next)->next;
		free(delete);
	}
	else
	{
		*head = (*head)->next;
		aux = aux->next;
		free(aux);
	}
	return (1);
}
