#include "main.h"
#include <stdio.h>
/**
*_abs - check the code
*@r: the value
*Description: The standard library provides a similar function
*Return: (0)
*/

int _abs(int r)

{
if (r >= 0)
{
return (r);
}
else
{
return (r *= -1);
}
}

