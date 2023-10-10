#include "search_algos.h"
/**
  * binary_search - Performs a binary search algorithm
  * @array: Array to perform action on
  * @size: size of array
  * @value: Value of the array to permorm action on
  * Return: Returns the index of the value
  */

int binary_search(int *array, size_t size, int value)
{
	int mid_indx, indx, *temparr;

	if (array == NULL)
		return (-1);
	mid_indx = size - 1;
	while (mid_indx >= 0)
	{
		printf("Searching in array: ");
		for (indx = 0; indx <= mid_indx; indx++)
		{
			printf("%d, ", array[indx]);
		}
		printf("\n");
		if (value == array[mid_indx])
			return (mid_index);
		if (value > array[mid_indx])
		{
			return (-1);
		}
		else
		{

		}
		mid_indx = size / 2;

	}

	return (-1);
}
