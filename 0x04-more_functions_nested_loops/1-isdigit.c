#include "main.h"

/**
 * _isdigit - check the code
 * @c: value to be tested
 * Return: either 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
