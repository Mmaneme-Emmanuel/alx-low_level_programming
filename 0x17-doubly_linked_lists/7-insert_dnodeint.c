#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*insert_dnodeint_at_index - function that inserts a new node anywhere
*@h:head node of the list
*@n: value of nodes
*@idx: index of new node
*Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new;
dlistint_t *head;
unsigned int i;

new = NULL;
if (idx == 0)
	new = add_dnodeint(h, n);
else
{
	head = *h;
	i = 0;
	while (head != NULL && i < idx - 1)
	{
		head = head->next;
		i++;
	}
		if (head != NULL)
			{
				new = malloc(sizeof(dlistint_t));
				if (new != NULL)
				{
					new->n = n;
					new->next = head->next;
					new->prev = head;
					if (head->next != NULL)
						head->next->prev = new;
					head->next = new;
				}
			}
}	
return (new);
}
