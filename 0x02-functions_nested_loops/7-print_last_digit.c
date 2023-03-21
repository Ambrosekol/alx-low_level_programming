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
		c = -c;
	k = c % 10;
	if (k < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
