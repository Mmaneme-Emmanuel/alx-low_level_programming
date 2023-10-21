#include "lists.h"
/**
 * print_list -  function that prints all the elements
 * @h:pointer to the const list
 * Return: total as the computed value
 */
size_t print_list(const list_t *h)
{
int total;


if (h == NULL)
	return (0);
for (total = 1; h->next != NULL; total++)
{
if (h->str == NULL)
printf("[%u] %s\n", h->len, "(nil)");

	else

printf("[%u] %s\n", h->len, h->str);
h = h->next;
}
printf("[%u] %s\n", h->len, h->str);

return (total);
}
