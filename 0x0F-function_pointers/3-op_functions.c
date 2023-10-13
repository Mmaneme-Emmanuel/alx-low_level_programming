#include "3-calc.h"
#include <stdio.h>
#include <stdlib>

/**
 * op_add - sum two numbers
 * @a: first number
 * @b: second number
 * Return: sum of two numbers
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 *op_sub - subtract two numbers
 *@a: first number
 *@b: second number
 *Return: difference of two numbers
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 *op_mul - multiply two numbers
 *@a: first number
 *@b: second number
 *Return: product of two numbers
 */
int op_mul(int a, int b)
{
return (a * b);
}


/**
 *op_div - divides two numbers
 *@a: first number
 *@b: second number
 *Return:the remain of two numbers
 */

int op_div(int a, int b)
{
return (a / b);
}


/**
 *op_mod - remainder of two divided numbers
 *@a: first number
 *@b: second number
 *Return:remainder of two divided numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
