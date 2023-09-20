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
int i = 0;

for (i = 0; dest[i] != '\0'; i++)
destl++;

for (i = 0; i < n && src[i]; i++)

dest[destl + i] = src[i];

return (dest);
}
