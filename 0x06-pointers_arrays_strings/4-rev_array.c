#include "main.h"
/**
  * reverse_array - Reverse the contents of arrays
  * @a: array
  * @n: number of items to swap
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int i, c;

	c = n;
	for(i = n - 1; i >= 0; i--)
	{
		a[i] = a[c];
		c--;
	}
	
}
