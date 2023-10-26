#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listp - to set linked list free
 * @head: the beginning of a list
 * Return:always nothing
 */
void free_listp(listp_t **head)
{
        listp_t *tempo;
        listp_t *pres;

        if (head != NULL)
{
        pres = *head;
        while ((tempo = pres) != NULL)
        {
                pres = pres->next;
                free(tempo);
        }
        *head = NULL;
}
}
/**
 * print_listint_safe - function that prints a listint_t
*@head:the head which points to another
*Returns: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)

{
size_t nnodes = 0;
listp_t *headptr, *new, *add;

headptr = NULL;
while (head != NULL)
{
        new = malloc(sizeof(listp_t));

        if (new == NULL)
                exit(98);

        new->p = (void *)head;
        new->next = headptr;
        headptr = new;

        add = headptr;

        while (add->next != NULL)
        {
                add = add->next;
                if (head == add->p)
                {
                        printf("-> [%p] %d\n", (void *) head, head->n);
                        free_listp(&headptr);
                        return (nnodes);
                }
        }
        printf("[%p] %d\n", (void *) head, head->n);
        head = head->next;
        nnodes++;
}
free_listp(&headptr);
return (nnodes);
}
