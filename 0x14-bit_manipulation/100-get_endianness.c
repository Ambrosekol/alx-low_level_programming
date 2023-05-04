#include "main.h"
/**
 * get_endianness - find the endianness of a system
 * Return: 0 if big and 1 if otherwise
 */
int get_endianness(void)
{
	unsigned int value = 0x1;
	char *r = (char *) &value;

	if (*r == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
