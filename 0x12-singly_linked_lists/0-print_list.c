#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_list - function that prints all the elements
 * @h:pointer to the const list
 * Return:always  list_t
 */
size_t print_list(const list_t *h)
{
	int total = 0;


if (h == NULL)

printf("[0] (nill)\n");

else

printf("[%d] %s\n", h->len, h->str);

total++;
h = h->next;

return (total);
}
