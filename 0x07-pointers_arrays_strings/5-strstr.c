#include "main.h"
/**
*_strstr - main function
*@needle:parameter
*@haystack:parameter
*Return: _strstr
*/
char *_strstr(char *haystack, char *needle)
{

for (; *haystack != '\0'; haystack++)
{
char *I = haystack;
char *P = needle;

while (*I == *P && *P != '\0')
	{
I++;
P++;
}
if (*P == '\0')
return (haystack);
}

return (0);
}
