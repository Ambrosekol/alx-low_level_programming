#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - index of a numner in array
 * @array: array to use
 * @size: size if array
 * @(cmp)(int): pointer of function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	for (i = 0, i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
