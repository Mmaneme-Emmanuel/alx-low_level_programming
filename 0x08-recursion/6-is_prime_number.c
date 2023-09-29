#include "main.h"
/**
*prime_a - calculate the prime number
*@a: input
*@b: divider
*Return: return 0.
*/
int prime_a(int a, int b)
{
if (a <= 1 || (a != b && a % b == 0))
return (0);

else if (a == b)
return (1);

return (prime_a(a, b + 1));
}
/**
*is_prime_number - function that returns 1 if the input integer is
*a prime number
*@n: the main number
*Return: return 1 for prime number and 0 if otherwise
*/
int is_prime_number(int n)
{
return (prime_a(n, 2));
}
