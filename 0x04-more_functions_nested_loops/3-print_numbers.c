#include "main.h"

/**
 * print_numbers - prints from 0 - 9
 *
 */
void print_numbers(void)
{
	int val;

	for (val = '0'; val < '10'; val++)
	{
		_putchar(val);
	}
	_putchar('\n');
}
