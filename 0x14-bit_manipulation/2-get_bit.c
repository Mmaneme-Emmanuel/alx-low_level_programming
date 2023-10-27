#include <stdio.h>
#include "main.h"
/**
 *get_bit - function that returns the value of a bit
 *@index: this is the index to the bits we should get
 *@n:the is the number gotten after the check
 *Return: numbers 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int e;

if (index > sizeof(size_t) * 8)
	return (-1);
for (e = 0; e < index; e++)
	n = n >> 1;
return ((n & 1));
}
