#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *sum_listint - function that returns the sum of all the data (n)
 *@head: the first node with the first address
 *Return:sum of sum of all the data (n) of a listint_t
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
		return (0);

while (head != NULL)
	{
	add += head->n;
		head = head->next;
	}
		return (add);
}
