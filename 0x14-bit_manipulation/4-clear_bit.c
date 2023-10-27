#include <stdio.h>
#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0
 * @index: index to the numbers sort for
 * @n: pointer to the new number
 * Return: return 1 if successful, else return 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int e;

	e = 1;
	e = e << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = e ^ *n;

	return (1);
}

