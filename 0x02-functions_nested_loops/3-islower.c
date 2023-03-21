#include "main.h"
/**
  * _islower - checks if int c is lower
  *
  * @c: number to be checked
  *
  * Return: Success (0) or (1)
  */
int _islower(int c)
{
	if (c > 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
