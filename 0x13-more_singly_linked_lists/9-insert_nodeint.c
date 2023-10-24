#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *create_newprime - inserts a new node at a given position
 *@n: this will be used for iteration
 *Return:new node
 */
listint_t *create_newprime(int n)
{
	listint_t *eprime;


	eprime = malloc(sizeof(listint_t));
	if (eprime == NULL)
		return (NULL);
	eprime->n = n;
	eprime->next = NULL;
	return (eprime);
}

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head:the first header
 *@n:this will be value of the new node
 *@idx:index of the new nod::
 *Return: a new positioned node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp;
	listint_t *temp_old;
	listint_t *eprime;

	temp = *head;
	if (head == NULL)
		return (NULL);

	eprime = create_newprime(n);
	if (eprime == NULL)
		return (NULL);
if (*head == NULL)
{
	*head = eprime;
return (eprime);
}
if (idx == 0)
{
	*head = eprime;
}
	for (i = 0; i < idx - 1 && temp != NULL && idx != 0; i++)
	temp = temp->next;

	if (temp == NULL)
	return (NULL);

if (idx == 0)
	eprime->next = temp;
	else
{
	temp_old = temp->next;
	temp->next = eprime;
	eprime->next = temp_old;
}
	return (eprime);
}
