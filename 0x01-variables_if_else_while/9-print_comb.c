#include <stdio.h>
/**
*main - all possible numbers
*Return: always 0
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '5');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
