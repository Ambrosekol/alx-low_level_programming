#include "main.h"
/**
 * _pow_recursion - a function that calculates power
 * @x: input x
 * @y: input y
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
