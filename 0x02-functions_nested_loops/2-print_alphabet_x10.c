#include "main.h"
/**
  * print_alphabet_x10 - this prints a-z 10X
  *
  * Return: Success (0)
  */
void print_alphabet_x10(void)
{
	int i, z;

	for (i = 0; i < 10; i++)
	{
		for (z = 'a'; z <= 'z'; z++)
		{
			_putchar(z);
		}
		_putchar('\n');
	}
}
