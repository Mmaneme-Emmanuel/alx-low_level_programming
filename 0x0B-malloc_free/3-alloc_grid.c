#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*alloc_grid - function that returns a pointer.
*@width: input one
*@height: input two
*Return: return a pointer
*/
int **alloc_grid(int width, int height)
{

int **Ek;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

Ek = malloc(sizeof(int *) * height);
if (Ek == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
Ek[i] = malloc(sizeof(int) * width);

if (Ek[i] == NULL)
{

for (; i >= 0; i--)
free(Ek[i]);

free(Ek);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
	for (j = 0; j < width; j++)

		Ek[i][j] = 0;
}
return (Ek);
}
