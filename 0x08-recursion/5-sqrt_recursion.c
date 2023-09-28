#include "main.h"
/**
*_sqrt_a - returns the natural square root of a number
*@a: prototype
*@b: iterator
Return:square root or -1
*/
int sqrt_a(int a, int b)
{

if (b * b == a)

return (b);

else if (b * b > 4)

return (-1);

return (sqrt_a(a, b + 1));
}
/**
*_sqrt_recursion - returns the natural square root of a number
*@n: the input number
*Return: natural square root
*/
int _sqrt_recursion(int n)
{
return (sqrt_a(n, 0));
}
