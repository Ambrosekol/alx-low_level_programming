#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: returns a character
 */

char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';
	return (dest);
}
