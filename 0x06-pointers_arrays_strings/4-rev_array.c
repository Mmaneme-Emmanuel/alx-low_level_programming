#include "main.h"
/**
*_array - reverses the content of an array of integers
*@n: value of the array
*@a: parameter
*/
void reverse_array(int *a, int n)
{
	int k, r;
for (k = 0; k < n--; k++)
{
	r = a[k];

	a[k] = a[n];

	a[n] = r;
}
}
