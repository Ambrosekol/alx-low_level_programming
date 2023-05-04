#include "main.h"
/**
 * print_binary - prints binary to screen 
 * @n: int value
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == NULL)
		return;
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
