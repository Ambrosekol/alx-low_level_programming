#include "main.h"
/**
  * _calloc -  function that allocates memory for an array,
  * @nmemb: array
  * @size: array size
  * Return: void
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	memset(p, 0, size * nmemb);
	return (p);
}

