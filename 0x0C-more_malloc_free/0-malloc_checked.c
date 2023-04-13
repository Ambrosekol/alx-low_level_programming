#include "main.h"
/**
 * malloc_checked - function that allocates memory
 * @b: int b
 * Return: Void.
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
}
