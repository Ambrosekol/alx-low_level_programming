#include "main.h"

/**
 * _isdigit - checks if digit
 * @c: value to be tested
 * Return: 1 for upper and 0 for lower
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
