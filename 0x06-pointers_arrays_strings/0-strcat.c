#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: returns a character
 */

char *_strcat(char *dest, char *src)
{
	int n;
	char *p = dest;
	int len = (strlen(dest) - 1);
	int length = (strlen(src) - 1);
	for(n = 0; n <= length; n++)
	{
		dest[len + 1] = src[n];
	}
	return p;
}
