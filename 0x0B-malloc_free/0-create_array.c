#include "main.h"
/**
  * create_array - a function that creates an array of chars
  * @size: array size
  * @c: char to init with
  * Return: char
  */
char *create_array(unsigned int size, char c)
{
	char *arptr;
	int i;

	arptr = malloc(sizeof(char) * size);
	if (arptr == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (int) size; i++)
		{
			arptr[i] = c;
		}
		return (arptr);
	}
}

