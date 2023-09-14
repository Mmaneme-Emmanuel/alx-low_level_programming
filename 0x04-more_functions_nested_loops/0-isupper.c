#include "main.h"
/**
*_isupper - looking for lower cases
*@c: the letter searched for
*Return: returns 1 if c is uppercase
*other return 0
*/
int _isupper(int c)
{
if (c > 'A' && c < 'Z')
return (1);

else
return (0);
}
