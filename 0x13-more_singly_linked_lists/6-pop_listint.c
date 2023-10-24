#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *pop_listint - function that deletes the head node of a listint_t
 * @head: the first node to be deleted
 * Return: return data n
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if (head == NULL || *head == NULL)
	return (0);

n = (*head)->n;

temp = *head;

*head = (*head)->next;

free(temp);

return (n);
}
