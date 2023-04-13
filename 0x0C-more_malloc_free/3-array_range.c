#include "main.h"
/**
  * array_range - function that creates an array of integers.
  * @min: Minimum
  * @max: Maximum
  * Return: int
  */

int *array_range(int min, int max)
{
	int i, *p, diff, cnt;

	cnt = 0;
	if (min > max)
		return (NULL);
	diff = max - min;
	p = malloc(sizeof(int) * (diff + 1));
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		p[cnt] = i;
		cnt++;
	}
	return (p);
}

