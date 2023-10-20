#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_node - adds a new node at the beginning of a list_t
 *@head:this is the starting point to everything
 *@str:pointer to the new made node
 *Return:return newly made pointer
 */

list_t *add_node(list_t **head, const char *str)
{

list_t *ek_node;
unsigned int len = 0;


while (str[len])
len++;

ek_node = malloc(sizeof(list_t));

if (!ek_node)
return (NULL);

ek_node->next = (*head);
ek_node->str = strdup(str);
ek_node->len = len;
(*head) = ek_node;

return (*head);
}
