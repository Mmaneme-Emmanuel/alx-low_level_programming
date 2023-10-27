#include <stdio.h>
#include "main.h"
/**
 *  flip_bits - function that returns the number of bits
 *@m: representing long int
 *@n: for unsigned integers
*Return: the number of beats that was flipped before ans.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result;
unsigned long int count;

result = n ^ m;
for (count = 0; result > 0;)
{
if ((result & 1) == 1)
count++;
result = result >> 1;
}
return (count);
}
