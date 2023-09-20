#include "main.h"
/**
*_strncat - function that copies a string
*@src: first issue to solve
*@dest: second issue i will be solving
*@n: appendable
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
char destl = 0;
char srcl = 0;
int i = 0;

for (i = 0; dest[i] != '\0'; i++)
destl++;

for (i = 0; src[i] != '\0'; i++)
	srcl++;

for (i = 0; i <= n; i++)

dest[destl + i] = src[i];

return (dest);
}
