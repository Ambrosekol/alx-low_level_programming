#include "main.h"
/**
  * _abs - checks if int c is lower
  *
  * @n: number to be checked
  *
  * Return: Success (0) or (1)
  */
int _abs(int n)
{
	if (n < 0)
	{
		n = -(n);
		return (n);
	}
	else
	{
		return (n);
	}
}
