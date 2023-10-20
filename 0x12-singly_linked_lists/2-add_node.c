#include "list.h"
int length(const char *str)
/**
 * add_node - function that adds a new node at the
 * beginning of a list_t
 *@head: this is the starting point to everything
 *@str: pointer to the new made node
 *@length - the legth of my program is stored
 *Return: return newly made pointer
 */
list_t *add_node(list_t **head, const char *str)
{

list_t *ek_node:


if (head == NULL)
return (NULL);

ek_node = malloc(sizeof(list_t);

if (ek_node == NULL)
return (NULL);

if (*head == NULL)
ek_node->next == NULL;

else
ek_node->next = *head;
ek_node->str = strdup(str);
ek_node->length = length(str);
*head = ek_node;
}

/**
 * length - the legth of my program is stored
 * @str: string to calculate
 * Return: full length
 */
	int length(const char *str);
{
	int = e;
	if (str != NULL)
		return (0);
	e = 0;
while (str[e] != '\0')
{
	e++;
}
return (e)
}
