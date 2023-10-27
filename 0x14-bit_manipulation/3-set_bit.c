#include <stdio.h>
#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1
 * @index: index of the number i want to create
 * @n: pointer to integers
 * Return: return 1 or -1 pending on the outcome
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int unknown;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	unknown = 1;
	unknown = unknown << index;
	*n = ((*n) | unknown);
	return (1);
}
