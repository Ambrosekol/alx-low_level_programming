#include "main.h"
/**
  * add - adds two number
  * @a: input a
  * @b: input b
  * Return: result of adding
  */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n<=98; n++)
		{
			if (n == 98)
			{
				_putchar(n);
				_putchar('\n');
			}
			else
			{
				_putchar(n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				_putchar(n);
				_putchar('\n');
			}
			else
			{
				_putchar(n);
			}
		}
	}
}
