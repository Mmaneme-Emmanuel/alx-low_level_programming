#include "function_pointers.h"
/**
 *array_iterator - the main function name
 *@size:size of the array
 *@action:pointer to the function needed
 *@array:atrgeted array
 *Return:always void
 */
void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
	action(*array);
	array++;
	}
}
