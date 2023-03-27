#include "main.h"
/**
  * print_array - print items in array
  * @a: array
  * @n: number of array
  * Return: void
  */
void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		if (a[z] != a[n])
		{
			printf("%d, ", a[z]);
		}
		else
		{
			printf("%d '\n'", a[z]);
		}
	}
}
