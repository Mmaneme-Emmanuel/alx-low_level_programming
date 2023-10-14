#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs calculator function
 * @argc: argument count
 * @argv: argument vector
 * Return: return the result of calc.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{

int num1, num2;
char *op;

if (argc != 4) /* if argument count is wrong */
{
printf("Error\n");
exit(98);
}

/* set command argument input */

num1 = atoi(argv[1]); /* first number input */

op = (argv[2]); /* operator input */

num2 = atoi(argv[3]); /*second number input */


/*  if operator not in operator list */
if (get_op_func(op) == NULL || op[1] != '\0')

printf("Error\n");
exit(99);

/* if user decides to divide or perform modulus by 0 */

if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))

printf("Error\n");

exit(100);
}
/* print result of operation */
printf("%d\n", get_op_func(op) (num1, num2));
return (0);
}
