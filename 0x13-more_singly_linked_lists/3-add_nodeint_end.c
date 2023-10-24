#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the beginning of a listint_t
 *@head:head of the first node
 *@n:the data of the new node
 *Return:return a node with an integer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{

listint_t *eprime;
listint_t *temp;

if (head == NULL)
return (0);
eprime = malloc(sizeof(listint_t));

if (eprime == NULL)
return (0);

eprime->next = NULL;
eprime->n = n;

if (*head == NULL)
{
*head = eprime;
return (eprime);
}

temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = eprime;

return (eprime);
}
