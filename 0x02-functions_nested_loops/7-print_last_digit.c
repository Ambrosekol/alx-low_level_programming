#include "main.h"
/**
  * print_last_digit- checks if int c is lower
  *
  * @c: number to be checked
  *
  * Return: Success (0) or (1)
  */
int print_last_digit(int c)
{
	int k;

	if (c < 0)
	{
		k = -(c);
	}
	k = c % 10;
	return (k);
}
