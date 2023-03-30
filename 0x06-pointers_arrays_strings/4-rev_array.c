#include "main.h"
/**
  * reverse_array - Reverse the contents of arrays
  * @a: array
  * @n: number of items to swap
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int i, temp;

	for(i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
