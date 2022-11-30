#include "lists.h"

/**
**add_nodeint_end - Adds a node to the linked list
*@head: Linked list
*@n: Numer to add to the linked list
*
*Return: The address of the new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *aux = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
	return (new);
}
