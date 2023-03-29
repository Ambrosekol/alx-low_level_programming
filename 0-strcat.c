#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: returns a character
 */

char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = strcat(dest, src);
	return ptr;
}
