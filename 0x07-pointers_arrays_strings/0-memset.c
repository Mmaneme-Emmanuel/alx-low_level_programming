#include "main.h"
/**
*_memset - my main function
*@n: first parameter n
*@s: second parameter s
*@b: constant parameter b
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
