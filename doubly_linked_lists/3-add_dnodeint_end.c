#include "lists.h"

/**
**add_dnodeint_end - Adds a node to the doubly linked list
*@head: Doubly linked list
*@n: Numer to add to the doubly linked list
*
*Return: The address of the new element
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *aux = *head;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
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
