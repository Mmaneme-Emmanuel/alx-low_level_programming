#include "main.h"
/**
*_strcpy - function name
*@dest: parameter 1
*@src: parameter 2
*Return:dest
*/

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
dest[i] = ('\n');

return (dest);
}
}
