#include "main.h"
/**
*_pow_recursion - main function
*@x: first string
*@y: second string
*Return:returns the value of x raised to the power of y
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
	{
return (-1);
	}
else if (x == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
