#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string to check
 * @accept: value to accept
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int str;

	str = strspn(s, accept);
	return (str);
}
