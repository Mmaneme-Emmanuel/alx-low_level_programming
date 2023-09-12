#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - three digit printer
*Return: always 0 (success)
*/

int main(void)
{
int i;
int j;

while (i = '0'; i < '9'; i++)
{
while (j = i + 1; j <= '9'; j++)
{
if (i != j)
{
putchar(i);
putchar(j);
if (i == '0' && j == '1')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
