#include "main.h"
/**
*_isdigit - checking for digit
*@c: that is it
*Return: return 1 if c is a digit
*otherwise return 0
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
