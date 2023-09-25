#include "main.h"
/**
*_memcpy - my main function
*@src: parameter src
*@dest: parameter dest
*@n: parameter n
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
