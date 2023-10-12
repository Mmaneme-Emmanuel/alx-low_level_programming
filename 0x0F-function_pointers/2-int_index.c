#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @size:number of elements in an array
 * @array:targeted array
 * @cmp: this is a pointer for comparying
 *
 * Return: int elements -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{

int i;

if (array == NULL || cmp == NULL)
	return (-1);

for (i = 0; i < size; i++)
{
	if (cmp(array[i] != 0))
		return (1);
}
return (-1);
}