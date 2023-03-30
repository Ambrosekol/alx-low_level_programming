#include "main.h"
/**
  * reverse_array - Reverse the contents of arrays
  * @a: array
  * @n: number of items to swap
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int k[n];
	int i;
	int c;

	c = 0;
	for(i = n; i >= 0; i--)
	{
		k[c] = a[i];
		c++;
	}
}
