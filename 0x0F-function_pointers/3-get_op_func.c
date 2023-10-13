#include "3-calc.h"
#include <stdio.h>
#include <stdlib>
/**
*get_op_func - select the option to perform each task
*@s:operator argument
*Return:return the result of the selected argument
*/
p_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
int i;
/* initialize i */
i = 0;

/*s doesnt match with any of the operands */
while (ops[i].op != NULL && *(ops[i].op != *s)
i++;
return (ops[i].f); /*return operation*/
