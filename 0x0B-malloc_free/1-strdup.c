#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory
 *@str: my pointer
 *Return: always NULL in every situation
 */
char *_strdup(char *str)
{
char *Ek;
int i, j = 0;

if (str == NULL)
return (NULL);
i = 0;

while (str[i] != '\0')
i++;

Ek = malloc(sizeof(char) * (i + 1));

if (Ek == NULL)
return (NULL);

for (j = 0; str[j]; j++)
Ek[j] = str[j];

return (Ek);
}
