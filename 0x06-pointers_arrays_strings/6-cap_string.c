#include "main.h"
/**
*cap_string - capitalizes all words of a string
*@str: the string to work with
*Return: void
*/
char *cap_string(char *str)
{
int c = 0;

while  (str[c])
{
while (!(str[c] >= 'a' && str[c] <= 'z'))
		c++;

if (str[c - 1] ==' ' ||
	str[c - 1] =='\t' ||
	str[c - 1] =='\n' ||
	str[c - 1] ==',' ||
	str[c - 1] ==';' ||
	str[c - 1] =='.' ||
	str[c - 1] =='!' ||
	str[c - 1] =='?' ||
	str[c - 1] =='"' ||
	str[c - 1] =='(' ||
	str[c - 1] ==')' ||
	str[c - 1] =='{' ||
	str[c - 1] =='}' ||
c == 0)

str[c] -= 32;

c++;
}
return (str);
}
