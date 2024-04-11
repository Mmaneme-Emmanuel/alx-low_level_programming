#include "search_algos.h"
int recursive_binary_search(int *array, int left, int right, int value);
void print_search(int *array, int first, int last);


/**
 * binary_search - Searches value in array of ints using the Binary search algo
 *
 * @array: Array to search
 *
 * @size: Size of the array
 *
 * @value: Value to search
 *
 * Return: First index where value is located or -1 for NULL array
 */

int binary_search(int *array, size_t size, int value)
{
	/* Check inputs and call recursive search return value */
	if (array && size)
	{
		return (recursive_binary_search(array, 0, (int)size - 1, value));
	}
	/* Otherwise return -1 */
	return (-1);
}
