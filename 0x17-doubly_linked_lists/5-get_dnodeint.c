#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint
 * @head: the head node in the list
 * @index: the index of the node
 * Return: nth node or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
	return (NULL);

	while (head->prev != NULL)
	head = head->prev;

	while (head != NULL)
	{
	if (count == index)
		return (head);

	head = head->next;
	count++;
	}

return (NULL);
}
