#include "main.h"
/**
*leet - parameter two
*
*@n: function parameter
*
*Return: always return 0
*/
char *leet(char *n)
{

int k, r;

char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (k = 0; n[k] != '\0'; k++)
{
for (r = 0; r < 10; r++)
{
if (n[k] == s1[r])
{
n[k] = s2[r];
}
}
}
return (n);
}
