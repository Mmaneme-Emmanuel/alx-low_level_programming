#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all elements of a doucly linked list
 * @h: head of my node
 * Return:return the elements in my list as count
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
{
	printf("%d\n", h->n);
	count++;
	h = h->next;
}
return (count);
}
