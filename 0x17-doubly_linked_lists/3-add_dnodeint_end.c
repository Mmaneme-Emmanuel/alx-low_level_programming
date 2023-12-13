#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a new node to the end of a doubly linked list
 * @head: pointer to the head of the list
 * @n: value for the new node
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{

		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = new;
	new->prev = temp;

	return (new);
}
