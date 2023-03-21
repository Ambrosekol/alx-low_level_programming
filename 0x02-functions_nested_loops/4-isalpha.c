#include "main.h"
/**
  * _isalpha - checks if int c is higher
  *
  * @c: number to be checked
  *
  * Return: Success (0) or (1)
  */
int _isalpha(int c)
{
	if ((c > 65 && c <= 90) || (c > 79 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
