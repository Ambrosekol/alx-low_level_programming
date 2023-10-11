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
	int mid, i;

	int left = 0;
	int right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching: ");

		for (i = left; i <= right; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return (-1);
}
