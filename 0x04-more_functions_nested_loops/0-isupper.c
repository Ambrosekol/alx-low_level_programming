#include "main.h"

/**
 * _isupper - checks if uppercase
 * @c: value to be checked
 * Return: Always 0.
 */
int _isupper(int c)
{
	int value;

	for (value = 'A'; value <= 'Z'; value++)
	{
		if (c == value)
			return (1);
	}
	return (0);
}
