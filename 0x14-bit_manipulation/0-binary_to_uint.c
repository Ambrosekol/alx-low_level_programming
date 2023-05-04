#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: input char b
 * Return: Unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;

	sum = 0;
	if (b == NULL)
		return (0);
	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		sum = (sum * 2) + (*b - '0');
	}
	return (sum);
}
