#include "lists.h"

/**
**insert_nodeint_at_index - Inserts a node at a given position
*@head: Head of the structure
*@idx: Index of the list
*@n: Node to add
*
*Return: Head of the structure
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *len_aux, *aux, *new_node = NULL;
	unsigned int i = 0, len = 0;

	if (!head || !*head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	aux = *head;
	len_aux = *head;
	new_node->n = n;
	new_node->next = NULL;

	while (len_aux)
	{
		len_aux = len_aux->next;
		len++;
	}
	if (idx > len)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (i < idx - 1)
	{
		aux = aux->next;
		i++;
	}
	new_node->next = aux->next;
	aux->next = new_node;
	return (aux);
}
