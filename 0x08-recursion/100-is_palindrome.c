#include "main.h"
/**
* _strlen_recursion - to get the string length
*@s: string
*Return: length of string
*/
int _strlen_recursion
{
	if (*s== '\0')
		return (0);
	else
		return (1 + _strlen_recursion (s + 1));
}
/**
*compare_string - compare the characters of my strings
*@s: string
*@

