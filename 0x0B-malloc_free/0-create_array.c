#include <stdlib.h>
#include "main.h"
/**
 * create_array - function that creates an array of chars
*@c:character to be assigned
*@size:size of array
*Return:return pointer to array and NULL if failed
*/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

str = malloc(sizeof(char) * size);

if (size == 0 || str == NULL)
return (NULL);

for (i = 0; i < size; i++)

str[i] = c;
return (str);
}
