#include "main.h"
/**
*_strpbrk - main function
*@s: parameter
*@accept: parameter
*Return: Always 0
*/
char *_strpbrk(char *s, char *accept)
{
	int k;
	int j;
for (k = 0; s[k] != '\0'; k++)
{
	for (j = 0; accept[j] != '\0'; j++)
{
	if (s[k] == accept[j])
		return (s + k);
}
}
return (0);
}
