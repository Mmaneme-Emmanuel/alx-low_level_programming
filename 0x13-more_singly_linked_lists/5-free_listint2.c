#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*free_listint - function that frees a listint_t list.
*@head: the head node of the listint
*Return: returned a freed listint
*/
void free_listint2(listint_t **head)
{

listint_t *temp;

while (head != NULL)
        temp = head;
{
head = head->next;
free(temp);
}
head = NULL;
}
