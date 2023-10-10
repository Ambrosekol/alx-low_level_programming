#include "search_algos.h"
/**
  * linear_search - Searches an array linerly and prints out the result
  * @array: Array to search
  * @size: Size of the array
  * @value: Value to search for
  * Return: Returns the first index of the value
  */

int linear_search(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < (int) size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
