#include "main.h"
/**
 * get_bit - gets bit at index
 * @n: number to convert
 * @index: index of bit to get
 * Return: returns index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
