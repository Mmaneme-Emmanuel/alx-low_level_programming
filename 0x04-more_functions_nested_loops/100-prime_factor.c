#include <stdio.h>

/**
 * main - program that finds and prints largest prime factor of 612852475143
 * Return: Always 0 (Success)
 */

int main(void)
{
	long prime = 612852475143;
	long divisor = 2;

	while (divisor * divisor <= prime)
	{
		if (prime % divisor == 0)
		{
			prime /= divisor;
		}
		else
		{
			divisor++;
		}
	}

	printf("%ld\n", prime);

	return (0);
}
