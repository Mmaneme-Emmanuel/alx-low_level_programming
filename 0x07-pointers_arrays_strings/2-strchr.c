#include "main.h"
/**
*_strchr - main function
*@c: parameter
*@s: parameter
*Return: pointer NULL or c
*/
char *_strchr(char *s, char c)
{

while (*s != '\0')
{
	if (*s == c)
		return (s);
	s++;
}
if (*s == c)
	return (s);

return (NULL);
}
