#include <stdio.h>
/**
main - three digit printer
Return: always 0 (success)

*/
int main(void)
{
int i;
int j;
int k;
{
for (i = 0; i <= 7; i++);
{

for (j = 0; j <= 8; j++);
{

for (k = 0; k <= 9; k++);
{

if (i != j && j != k && i != k)
{

putchar('%d\n', i, j, k + 0);
putchar(' ');
putchar(',');

}
}
}
}
}
return (0);
}
