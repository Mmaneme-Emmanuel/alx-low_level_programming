#include "main.h"
/**
*print_last_digit - function that prints the last digit of a number
*@r: integer input
*Return: return last digit of r
*/

int print_last_digit(int r)

{
int i;

if (r < 0)
{
i = -1 * (r % 10);
}
else
{
i = r % 10;
}
_putchar(i);
return (i);
}
