#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - function that concatenates two strings.
 *@s1:first parameter
 *@s2: second parameter
 *Return: return NULL no matter the condition
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int i = 0;
int j = 0;

if (s1 == NULL)
return (s1);

if (s2 == NULL)
return (s2);

while (s1[i] != '\0')
i++;

while (s2[j] != '\0')
j++;
concat = malloc(sizeof(char) * (i + j + 1));

if (concat == NULL)
return (NULL);

i = j = 0;
while (s1[i] != '\0')
{
concat[i] = s1[i];
i++;
}
while (s2[j] != '\0')
{
concat[i] = s2[j];
j++;
}
concat[i] = '\0';
return (concat);
}
