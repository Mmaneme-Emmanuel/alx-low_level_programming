#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*reverse_listint - function that reverses a listint_t
*@head:the node with the first address
*Return:pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *temp, *next;


if (head == NULL || *head == NULL)
return (NULL);

if ((*head)->next == NULL)
return (*head);
temp = NULL;

while ((*head) != NULL)
{
next = (*head)->next;
(*head)->next = temp;
temp = *head;
*head = next;
}
*head = temp;
return (*head);
}
