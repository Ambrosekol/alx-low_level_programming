#include "main.h"
/**
  * _calloc -  function that allocates memory for an array,
  * @nmemb: array
  * @size: array size
  * Return: void
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}

