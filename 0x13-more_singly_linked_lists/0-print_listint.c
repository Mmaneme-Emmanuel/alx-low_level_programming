#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*print_listint - function that prints all the elements.
*@h:what keeps track of the loop
*Return:elements of listint list
*/
size_t print_listint(const listint_t *h)
{
size_t i;

if (h == NULL)
	return (0);

for (i = 0; h != NULL; i++)

	printf("%d\n", h->n);
h = h->next;

return (i);
}
