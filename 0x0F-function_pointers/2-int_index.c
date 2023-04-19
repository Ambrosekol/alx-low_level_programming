#include "function_pointers.h"
/**
 * int_index - index of a numner in array
 * @array: array to use
 * @size: size if array
 * @cmp: pointer of function
 * Return: return 0 number of good else -1
 */
int int_index(int *array, int size, int (*cmp)(int a))
{
	int i;

	if (array == NULL || size == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
