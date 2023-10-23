#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *listint_len - function that returns the number of elements
 *@h:the head node that contains the first address
 *Return:the number of elements linked
 */
size_t listint_len(const listint_t *h)
{
int i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
	h = h->next;
return (i);
}
