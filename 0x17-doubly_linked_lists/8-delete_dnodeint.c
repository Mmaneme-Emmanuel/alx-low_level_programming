#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: head node of the list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *current;
	unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

	current = *head;
	i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;
	else
		*head = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

free(current);
return (1);
}
