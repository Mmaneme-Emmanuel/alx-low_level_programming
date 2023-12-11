#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all elements of a doucly linked list
 * @h: head of my node
 * Return:return the elements in my list as count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
{
	count++;
	h = h->next;
}
return (count);
}
