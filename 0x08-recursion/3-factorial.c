#include "main.h"
/**
 * factorial - a function that returns the factorial
 * @n: number to calculate
 * Return: int
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
