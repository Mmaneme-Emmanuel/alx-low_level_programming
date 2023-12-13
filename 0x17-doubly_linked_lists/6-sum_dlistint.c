#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*sum_dlistint - add datas of a doublelst
*@head:head of the list
*Return:return sumed up data
*/
int sum_dlistint(dlistint_t *head)
{
int sum;
sum = 0;

if (head == NULL)
	return (0);

while (head->prev != NULL)

head = head->prev;

while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
