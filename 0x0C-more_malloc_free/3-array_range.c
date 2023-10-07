#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*array_range - function that creates an array of integers
*@min: first value
*@max: second array
*Return: return the created array
*/
int *array_range(int min, int max)
{
int *str, index, size;

if (min > max)
return (NULL);

size = max - min + 1;

str = malloc(sizeof(int) * (size));

if (str == NULL)
return (NULL);

for (index = 0; index < size; index++)
str[index] = min++;

return (str);
}
