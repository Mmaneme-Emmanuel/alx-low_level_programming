#include "lists.h"
/**
 * list_len -  function that prints all the elements
 * @h:pointer to the const list
 * Return: total as the computed value
 */
size_t list_len(const list_t *h)
{

int total;


if (h == NULL)
return (0);

for (total = 1; h->next != NULL; total++)
h = h->next;

return (total);
}
