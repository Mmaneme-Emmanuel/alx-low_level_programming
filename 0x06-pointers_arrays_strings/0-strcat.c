#include "main.h"
/**
**_strcat - function that concatenates two strings
*@src: firststring
*@dest: second string
*Return: return dest after concatenating
*/

char *_strcat(char *dest, char *src)
{

char destl = 0;
char srcl = 0;
int i = 0;

for (i = 0; dest[i] != '\0'; i++)
	destl++;
{

}

for (i = 0; src[i] != '\0'; i++)
	srcl++;
{

}

for (i = 0; i <= srcl; i++)
{
dest[destl + i] = src[i];
}

return (dest);
}


