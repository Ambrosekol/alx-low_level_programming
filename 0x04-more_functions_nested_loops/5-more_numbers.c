#include "main.h"

/**
 * more_numbers - prints from 0 - 14
 */
void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
				_putchar('1');
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
