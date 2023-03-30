#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: returns a character
 */

char *_strcat(char *dest, char *src)
{
	char* ptr = dest + strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return dest;
}
