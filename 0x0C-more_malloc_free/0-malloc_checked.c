#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - function that allocates memory using malloc
*@b: value to be assigned
*Return: return EK
*/
void *malloc_checked(unsigned int b)
{
	void *Ek;

	Ek = malloc(b);
if (Ek == NULL)
exit(98);
return (Ek);
}
