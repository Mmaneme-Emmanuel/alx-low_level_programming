#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *get_nodeint_at_index - function that returns the nth node of a listint_t
 *@head:first node on list
 *@index:is the index of the node, starting at 0
 *Return: return the retrieved node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a;

for (a = 0; a < index; a++)
{
if (head == NULL)
return (NULL);

head = head->next;
}
return (head);
}
