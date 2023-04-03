#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string input
 * @accept: string to accept
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	char *k;

	k = strpbrk(s, accept);
	return (k);
}
