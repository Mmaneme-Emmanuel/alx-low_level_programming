#include "main.h"

/**
 * print_number - prints an integer using _putchar.
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int divisor = 1;
	int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	while (num / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{_putchar((num / divisor) % 10 + '0');
		divisor /= 10;
	}
}
