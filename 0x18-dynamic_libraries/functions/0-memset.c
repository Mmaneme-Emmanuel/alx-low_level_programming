#include "main.h"
/**
*_memset - fill a block of memory witha specific value
*@s: starting address of memory to be filled
*@b: the desired value
*@n: number of byte to be changed
*Return: chaned array with new value for n byte
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
