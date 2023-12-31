#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*free_listint2 - function that frees a listint_t list.
*@head: the head node of the listint
*Return: returned a freed listint
*/
void free_listint2(listint_t **head)
{

listint_t *temp;

if (head == NULL || *head == NULL)
	return;


while ((*head)->next != NULL)
{
temp = (*head)->next;

free(*head);
*head = temp;
}
free(*head);
*head = NULL;
}
