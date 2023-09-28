#include "main.h"
/**
*factorial - main function
*@n: parameter
*Return:factorial on n
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

return (n * factorial(n - 1));
}
