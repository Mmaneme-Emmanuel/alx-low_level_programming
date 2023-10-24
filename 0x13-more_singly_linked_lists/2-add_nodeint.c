#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint - adds a new node at the beginning of a listint_t
 *@h:head of the first node
 *@n:the data of the new node
 *Return:return a node with an integer
 */

listint_t *add_nodeint(listint_t **head, const int n)

{

listint_t *eprime;

if (head == NULL)
return (0);
eprime = malloc(sizeof(listint_t));

if (eprime == NULL)
return (0);

if (*head == NULL)

eprime->next = NULL;

else
eprime->next = *head;
eprime->n = n;
*head = eprime;

return (0);
}
