#include "main.h"
/**
*print_diagsums - main function
*@size: parameter
*@a: parameter
*Return: Always 0.
*/
void print_diagsums(int *a, int size)
{

int counting1 = 0;
int counting2 = 0;
int x;

for (x = 0; x < size; x++)
{
	counting1 = counting1 + a[x * size + x];
}
for (x = size - 1; x >= 0; x--)
{
	counting2 += a[x * size + (size - x - 1)];
}
printf("%d, %d\n", counting1, counting2);
}
