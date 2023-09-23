#include "main.h"
#include <stdio.h>
/**
*function - that adds line to this code
*@a: variable
*Return: always return void
*/
int main(void)

{
int n;
int a[5];
int *p;

a[2] = 1024;

p = &n;
/**
* Write your line of code here
* Remember:
*_You are not allowed to use the variable a
*_You are not allowed to modify the variable p
*_only one statement
*_You are not allowed to code anything elsethan
*the line of expected line of code
*/

*(p + 5) = 98;

/*so that this prints 98\n*/

printf("a[2] = %d\n", a[2]);

return (0);
}
