#include "main.h"
/**
*_puts - prints a string
*@str: parameter member
*Return: return the str
*/
void _puts(char *str)
{

int i;

for (i = 0; str[i] != '\0'; i++)

_putchar (str[i]);

_putchar('\n');
}
