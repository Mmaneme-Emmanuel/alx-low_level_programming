#include "function_pointers.h"
/**
 * print_name - function that prints a name
 *@f: string container
 *@name: the new name to be written
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
