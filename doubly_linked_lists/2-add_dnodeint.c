#include "lists.h"

/**
**add_dnodeint - Adds a node to the doubly linked list
*@head: Doulbe linked list
*@n: Numer to add to the doubly linked list
*
*Return: The address of the new element
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new_node;


	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!head)
		head = &new_node;

	if (!(*head))
		*head = new_node;

	else
	{
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
