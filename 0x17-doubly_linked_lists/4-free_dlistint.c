#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*free_dlistint - function that frees a dlist
*@head:the head node
*Return:return a freed list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *nextNode;

	while (current != NULL)
	{
	nextNode = current->next;
	free(current);
	current = nextNode;
	}
}
