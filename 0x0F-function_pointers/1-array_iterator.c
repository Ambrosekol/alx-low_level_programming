#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - iterate through an array
 * @array: array to ilterate
 * @size: size of array
 * @action: void action
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
