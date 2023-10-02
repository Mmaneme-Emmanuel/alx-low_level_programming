#include <stdio.h>
#include "main.h"
/**
* main - print your name with a new line
*@argc: number of arguments passed
*@argv: array of strings held by argc
*return: always 0 (success)
*/
int main(int argc __attribute__ ((unsused)); char *argv[])
{
printf("%s\n", *argv);
return (0);
}
