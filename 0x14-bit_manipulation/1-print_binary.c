#include <stdio.h>
#include "main.h"
/**
 * print_bin - printing binary representation of a number
 * @n: the number to be converted
 * Return:return binary represented number
 */
void print_bin(unsigned long int n)
{
if (n == 0)
	return;
print_bin(n >> 1);
if ((n & 1) == 1)
	_putchar('1');
if ((n & 1) == 0)
	_putchar('0');
}

/**
 * print_binary - printing binary representation of a number
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
if (n == 0)
	_putchar('0');
else
{
	print_bin(n);
}
}
